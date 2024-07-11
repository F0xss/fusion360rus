const fs = require('fs');
const generated_dir = __dirname + '/../tests_bindings/generated';
var supported_locales = [
    "cs-CZ",
    "de-DE",
    "en-US",
    "es-ES",
    "fr-FR",
    "hu-HU",
    "it-IT",
    "ja-JP",
    "ko-KR",
    "pl-PL",
    "pt-BR",
    "pt-PT",
    "ru-RU",
    "zh-CN",
    "zh-TW",
    "nl-NL"
];
if (!fs.existsSync(generated_dir)){
    fs.mkdirSync(generated_dir);
}

var compare_sign_in_locale_strings_basic = function(browser, strings) {
    browser.waitForElementVisible('span[locale_str=sign_in_title]')
    .assert.containsText('span[locale_str=sign_in_title]', strings['sign_in_title'])
    .assert.containsText('span[locale_str=sign_in_message_1]', strings['sign_in_message_1'])
    .assert.containsText('span[locale_str=sign_in_message_2]', strings['sign_in_message_2'])
    .assert.containsText('span[locale_str=sign_in_restart_button]', strings['sign_in_restart_button']);
}

var compare_error_locale_strings = function(browser, strings) {
    browser.waitForElementVisible('span[locale_str=error_message]')
    .assert.containsText('span[locale_str=error_message]', strings['error_message']);
}

var compare_sign_in_locale_strings = function(browser, strings) {
    compare_sign_in_locale_strings_basic(browser, strings);
}

var compare_sign_in_locale_strings_with_error = function(browser, strings) {
    compare_sign_in_locale_strings_basic(browser, strings);
    compare_error_locale_strings(browser, strings);
}

var generate_ref_binding_file = function(locale, enable_error_message=false) {
    const ref_binding_filename = generated_dir + '/ref_binding_' + locale + (enable_error_message ? '_with_error' : '') + '.js';
    const error_code_lines = [
        'var errorElement = document.getElementsByClassName(\"error-container-wrapper\")[0];',
        'errorElement.style.display = \"block\";'
    ];
    const binding_code = [
        'var get_predefined_language = function(){ return Promise.resolve([\"' + locale + '\"]); }',
        'check_predefined_language();'
    ].concat(
        enable_error_message ? error_code_lines : []
    ).join('\n');

    if(fs.existsSync(ref_binding_filename)) {
        fs.unlinkSync(ref_binding_filename);
    }
    fs.writeFileSync(ref_binding_filename, binding_code);
    return ref_binding_filename;
}

var get_locale_strings = function(browser, locale) {
    const ref_locale_filename = generated_dir + '/ref_locale_' + locale + '.js';
    var localization_file = browser.globals.root_html_url + '/assets/lang/' + locale + '.js';

    const data = fs.readFileSync(localization_file, 'utf8');
    const modified_data = data + "\nmodule.exports = localized_string;";

    if(fs.existsSync(ref_locale_filename)) {
        fs.unlinkSync(ref_locale_filename);
    }
    fs.writeFileSync(ref_locale_filename, modified_data);

    return require(ref_locale_filename);
}

var test_supported_locale_str_helper = function(browser, locale) {

    try {
        ref_binding_filename = generate_ref_binding_file(locale);

        browser.init(browser.globals.signin_url)
        .injectScript(ref_binding_filename, function(){
            var strings = get_locale_strings(browser, locale);
            compare_sign_in_locale_strings(browser, strings);
        });

    } catch(err) {
        console.log(err);
        browser.assert.equal(err, null);
    }
}

var test_supported_locale_str_helper_with_error = function(browser, locale) {
    try {
        ref_binding_filename = generate_ref_binding_file(locale, true);

        browser.init(browser.globals.signin_url)
        .injectScript(ref_binding_filename, function(){
            var strings = get_locale_strings(browser, locale);
            compare_sign_in_locale_strings_with_error(browser, strings);
        });

    } catch(err) {
        console.log(err);
        browser.assert.equal(err, null);
    }
}

var get_available_locales = function(browser) {
    var files = fs.readdirSync(browser.globals.root_html_url + '/assets/lang');
    var locales = [];
    Array.from(files).forEach(
        file => locales.push(file.substr(0, file.lastIndexOf('.')))
    );
    return locales;
}

module.exports = {
    //  Test supported locales availability should be first.
    //  Next tests relies on this test to be correct
    test_supported_locale_list: function(browser) {
        var available_locales = get_available_locales(browser);
        Array.from(supported_locales).forEach(
            function(locale) {
                const locale_found = available_locales.find(l => l == locale);
                browser.assert.equal(locale_found, locale);
            }
        )
    },
    //  Test the browser locale. If it's not supported, then it should be using en-US
    test_machine_locale: function(browser) {
        browser.init(browser.globals.signin_url)
        .execute("return choose_language(null);", [], function(resp) {
            var locale = resp.value;
            browser.assert.notEqual(locale, null);
            if(supported_locales.indexOf(locale) >= 0) {
                console.log("Testing supported locale " + locale);
                test_supported_locale_str_helper(browser, locale);
            } else {
                console.log("Testing unsupported locale " + locale);
                const default_strings = get_locale_strings(browser, "en-US");
                const ref_binding_filename = generate_ref_binding_file(locale);
                browser.init(browser.globals.signin_url)
                .injectScript(ref_binding_filename, function(){
                    compare_sign_in_locale_strings(browser, default_strings);
                });
            }
        });
    },

    //  Test all supported languages
    test_locale_str_supported_languages: function(browser) {
        Array.from(supported_locales).forEach(
            function(locale){
                test_supported_locale_str_helper(browser, locale);
            }
        );
    },

    //  Test all supported languages with error message
    test_locale_str_supported_languages_with_error: function(browser) {
        Array.from(supported_locales).forEach(
            function(locale){
                test_supported_locale_str_helper_with_error(browser, locale);
            }
        );
    },

    //  Test unsupported languages
    //  It should fallback to en-US
    test_locale_str_unsupported_languages: function(browser) {
        var locales = [
            "zh-HK",
            //  add more unsupported language here
        ];
        const default_strings = get_locale_strings(browser, "en-US");
        Array.from(locales).forEach(
            function(locale) {
                ref_binding_filename = generate_ref_binding_file(locale);
                browser.init(browser.globals.signin_url)
                .injectScript(ref_binding_filename, function(){
                    compare_sign_in_locale_strings(browser, default_strings);
                });
            }
        );
    },

    //  Test "Restart browser" button binding
    test_sign_in_bind_call: function(browser) {
        browser.init(browser.globals.signin_url)
        .injectScript(browser.globals.signin_bindings_js_url, function(){
            browser
            .pause(500)
            .execute("return window.sign_in_call_count;", [], function(resp) {
                browser
                .assert.equal(resp.value, 0)
                .click('span[locale_str=sign_in_restart_button]', function(result){
                    browser
                    .execute("return window.sign_in_call_count;", [], function(resp) {
                        browser
                        .assert.equal(resp.value, 1)
                        .keys(browser.Keys.ENTER, function(result){
                            browser
                            .execute("return window.sign_in_call_count;", [], function(resp) {
                                browser.assert.equal(resp.value, 2);
                            })
                        })
                    })
                })
            })
        })
    },

    //  Test close button binding
    test_close_bind_call: function(browser) {
        browser.init(browser.globals.signin_url)
        .injectScript(browser.globals.signin_bindings_js_url, function(){
            browser
            .pause(500)
            .execute("return window.close_window_called;", [], function(resp) {
                browser
                .assert.equal(resp.value, false)
                .click('img[class=img-close]', function(result){
                    browser
                    .execute("return window.close_window_called;", [], function(resp) {
                        browser.assert.equal(resp.value, true);
                    })
                });
            })
        })
    },

    //  Test scale binding
    test_scale_bind_call: function(browser) {
        browser.init(browser.globals.signin_url)
        .injectScript(browser.globals.signin_bindings_js_url, function(){
            browser
            .pause(500)
            .execute("return document.body.style.transform;", [], function(resp) {
                browser.assert.equal(resp.value, 'scale(2)');
            })
        })
    },

    //  Test additional localization files that's not in the supported locale list
    test_unplanned_supported_locale_list: function(browser) {
        var available_locales = get_available_locales(browser);
        Array.from(available_locales).forEach(
            function(locale) {
                const locale_found = supported_locales.find(l => l == locale);
                browser.assert.equal(locale_found, locale);
            }
        )
    },
}