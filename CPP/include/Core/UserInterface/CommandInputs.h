//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2023 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "../Base.h"
#include "../CoreTypeDefs.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COMMANDINPUTS_CPP__
# define ADSK_CORE_COMMANDINPUTS_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDINPUTS_API
# endif
#else
# define ADSK_CORE_COMMANDINPUTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class AngleValueCommandInput;
    class BoolValueCommandInput;
    class BrowserCommandInput;
    class ButtonRowCommandInput;
    class Command;
    class CommandInput;
    class DirectionCommandInput;
    class DistanceValueCommandInput;
    class DropDownCommandInput;
    class FloatSliderCommandInput;
    class FloatSpinnerCommandInput;
    class GroupCommandInput;
    class ImageCommandInput;
    class IntegerSliderCommandInput;
    class IntegerSpinnerCommandInput;
    class Matrix3D;
    class RadioButtonGroupCommandInput;
    class SelectionCommandInput;
    class StringValueCommandInput;
    class TabCommandInput;
    class TableCommandInput;
    class TextBoxCommandInput;
    class TriadCommandInput;
    class ValueCommandInput;
    class ValueInput;
}}

namespace adsk { namespace core {

/// Provides access to the set of inputs for a command. Command inputs are used to gather inputs from the user when a command is executed.
/// The set of inputs used by a command are created and added to the command with the methods in this class.
class CommandInputs : public Base {
public:

    /// Gets the parent Command object.
    Ptr<Command> command() const;

    /// Returns the specified command input using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<CommandInput> item(size_t index) const;

    /// Returns the command input that has the specified ID.
    /// id : The unique ID of the command input you want to get.
    /// Returns the specified command input or null if the input ID doesn't match an existing command input.
    Ptr<CommandInput> itemById(const std::string& id) const;

    /// Gets the number of inputs.
    size_t count() const;

    /// Adds a new value input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// unitType : The unit type of the value. This will be used to validate the input and the returned Value object
    /// will be of this type.
    /// initialValue : The initial value of this input as shown in the dialog. This can be a string or a real. If it's a string
    /// it must be able to be evaluated using the specified unit type. If it's a real it is assumed to be in database
    /// units for the specified unit type and is displayed as a string
    /// Returns the created ValueCommandInput object or null if the creation failed.
    Ptr<ValueCommandInput> addValueInput(const std::string& id, const std::string& name, const std::string& unitType, const Ptr<ValueInput>& initialValue);

    /// Adds a new boolean input to the command. The input can be shown as a check box or a button. If it's a button
    /// you need to specify the resource folder to define the icon to use. Buttons don't have an up or down state but
    /// can just be clicked.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// isCheckBox : Specifies if this input should be displayed as a check box or a button. If true a check box is
    /// displayed, if false a button is displayed that can be clicked to toggle it's state.
    /// resourceFolder : Specifies the folder that contains the image for the input.
    /// It's optional if isCheckBox is true. If it's set for check box, the check box will be present as a button and has an up or down state.
    /// initialValue : Specifies the initial value of the check box or button where for a check box the value of True results
    /// in it being checked and for a button a value of true results in the button being pressed.
    /// Returns the created BoolValueCommandInput object or null if the creation failed.
    Ptr<BoolValueCommandInput> addBoolValueInput(const std::string& id, const std::string& name, bool isCheckBox, const std::string& resourceFolder = "", bool initialValue = false);

    /// Adds a new string input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// initialValue : Specifies the initial value as shown in the dialog.
    /// Returns the created StringValueCommandInput object or null if the creation failed.
    Ptr<StringValueCommandInput> addStringValueInput(const std::string& id, const std::string& name, const std::string& initialValue = "");

    /// Adds a new selection input to the command. This allows you to get entity selections from the user. The default
    /// behavior is that only one entity can be selected and it can be of any type. To change the selection behavior to
    /// select specific types and control the number of items selected use the methods and properties on the returned
    /// SelectionCommandInput object. You can also use the selectionEvent event that's associated with the command
    /// to have additional control over the selection process.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// commandPrompt : The text in the tooltip shown next to the cursor.
    /// Returns the created SelectionCommandInput object or null if the creation failed.
    Ptr<SelectionCommandInput> addSelectionInput(const std::string& id, const std::string& name, const std::string& commandPrompt);

    /// Adds a new empty drop-down input to the command. drop-downs of various types are supported.
    /// To add items to the drop down use the returned DropDownCommandInput object.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this command as seen in the dialog.
    /// dropDownStyle : Specifies the style of the drop-down.
    /// Returns the created DropDownCommandInput object or null if the creation failed.
    Ptr<DropDownCommandInput> addDropDownCommandInput(const std::string& id, const std::string& name, DropDownStyles dropDownStyle);

    /// Adds a new row of buttons as a command input. Depending on the isMultiSelectEnabled argument it can act like an option list
    /// where only a single button on the row can be selected at a time or multiple buttons can be selected.
    /// The buttons are defined by using the returned ButtonRowCommandInput object.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this command as seen in the dialog.
    /// isMultiSelectEnabled : Sets if this button row can have multiple items selected at once or not.
    /// If True, multiple buttons can be selected at once. If False only one button
    /// can be selected and selecting another button unselects the one currently selected.
    /// Returns the created ButtonRowCommandInput object or null if the creation failed.
    Ptr<ButtonRowCommandInput> addButtonRowCommandInput(const std::string& id, const std::string& name, bool isMultiSelectEnabled);

    /// Adds a new slider input to the command. The value type is double.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// unitType : The unit type of the value. This will be used to validate the input and the returned value will be in the base units for this
    /// unit type. For example if you specify the unitType to be "in" the returned value will be in centimeters because inches are
    /// a length unit and the base unit for length is centimeters.
    /// min : Provides the minimum value in database units
    /// max : Provides the maximum value in database units
    /// hasTwoSliders : Optional input. Indicates if the slider input has two sliders.
    /// Returns the created FloatSliderCommandInput object or null if the creation failed.
    Ptr<FloatSliderCommandInput> addFloatSliderCommandInput(const std::string& id, const std::string& name, const std::string& unitType, double min, double max, bool hasTwoSliders = false);

    /// Adds a new slider input to the command. The value type is float.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// unitType : The unit type of the value. This will be used to validate the input and the returned Value object
    /// will be of this type.
    /// valueList : Provides the value list (in database units) of the slider command input. This defines all of the values that the slider
    /// can return. As the user moves the slider it will jump between these values. The low and high values
    /// of the list are used as the minimum and maximum values of the slider.
    /// hasTwoSliders : Optional input. Indicates if the slider input has two sliders.
    /// Returns the created FloatSliderCommandInput object or null if the creation failed.
    Ptr<FloatSliderCommandInput> addFloatSliderListCommandInput(const std::string& id, const std::string& name, const std::string& unitType, const std::vector<double>& valueList, bool hasTwoSliders = false);

    /// Adds a new slider input to the command. The value type is integer.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// min : Provides the minimum value.
    /// max : Provides the maximum value.
    /// hasTwoSliders : Optional input. Indicates if the slider input has two sliders.
    /// Returns the created IntegerSliderCommandInput object or null if the creation failed.
    Ptr<IntegerSliderCommandInput> addIntegerSliderCommandInput(const std::string& id, const std::string& name, int min, int max, bool hasTwoSliders = false);

    /// Adds a new slider input to the command. The value type is integer.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// valueList : Provides the value list of the slider command input. This defines all of the values that the slider
    /// can return. As the user moves the slider it will jump between these values. The low and high values
    /// of the list are used as the minimum and maximum values of the slider.
    /// hasTwoSliders : Optional input. Indicates if the slider has two sliders.
    /// Returns the created IntegerSliderCommandInput object or null if the creation failed.
    Ptr<IntegerSliderCommandInput> addIntegerSliderListCommandInput(const std::string& id, const std::string& name, const std::vector<int>& valueList, bool hasTwoSliders = false);

    /// Adds a text box input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog. If an empty string is provided then
    /// no name will be displayed and the text box will span the width of the command dialog.
    /// formattedText : 
    /// Gets and sets the formatted text displayed in the dialog. Formatted text includes
    /// any basic html formatting that has been defined. For example, you can use basic html
    /// formatting such as <code>&lt;b&gt;Bold&lt;/b&gt;</code>, <code>&lt;i&gt;Italic&lt;/i&gt;</code>,
    /// and <code>&lt;br /&gt;</code> for a line break. It also supports hyperlinks, which when clicked
    /// by the user, Fusion 360 will open the specified URL in the default browser. Hyperlinks are defined
    /// using the <code>&lt;a&gt;</code> tag such as
    /// "<code>You are using Autodesk's &lt;a href="http://fusion360.autodesk.com"&gt;Fusion 360&lt;/a&gt;.</code>".
    /// 
    /// numRows : Specifies the height of the text box as defined by the number of rows of text that can be displayed.
    /// If the text is larger than will fit in the box a scroll bar will automatically be displayed.
    /// isReadOnly : Specifies if the text box is read-only or not.
    /// Returns the created TextBoxCommandInput object or null if the creation failed.
    Ptr<TextBoxCommandInput> addTextBoxCommandInput(const std::string& id, const std::string& name, const std::string& formattedText, int numRows, bool isReadOnly);

    /// Adds a new spinner input to the command. The value type is float.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// unitType : The unit type of the value. This will be used to validate the input and the returned Value object
    /// will be of this type.
    /// min : Provides the minimum value in database units.
    /// max : Provides the maximum value in database units.
    /// spinStep : Sets the spin step value in the unit type set by the unitType argument.
    /// The value should be more than zero. This is the amount the slider will advance
    /// when the user clicks the spin button beside the value.
    /// initialValue : The initial value of this input as shown in the dialog. This value is assumed to be in database
    /// units for the specified unit type
    /// Returns the created FloatSpinnerCommandInput object or null if the creation failed.
    Ptr<FloatSpinnerCommandInput> addFloatSpinnerCommandInput(const std::string& id, const std::string& name, const std::string& unitType, double min, double max, double spinStep, double initialValue);

    /// Adds a new spinner input to the command. The value type is integer.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// min : Provides the minimum value.
    /// max : Provides the maximum value.
    /// spinStep : Provides the spin step. The value should be more than zero. This is the amount the slider will advance
    /// when the user clicks the spin button beside the value.
    /// initialValue : The initial value of this input as shown in the dialog.
    /// Returns the created IntegerSpinnerCommandInput object or null if the creation failed.
    Ptr<IntegerSpinnerCommandInput> addIntegerSpinnerCommandInput(const std::string& id, const std::string& name, int min, int max, size_t spinStep, int initialValue);

    /// Adds a new Radio Button Group input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this radio button group as seen in the dialog.
    /// Returns the created RadioButtonGroupCommandInput object or null if the creation failed.
    Ptr<RadioButtonGroupCommandInput> addRadioButtonGroupCommandInput(const std::string& id, const std::string& name = "");

    /// Adds a new Group input to the command. Group Command inputs organize a set of command inputs into a collapsible
    /// list within a command dialog.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this group as seen in the dialog.
    /// Returns the created GroupCommandInput object or null if the creation failed.
    Ptr<GroupCommandInput> addGroupCommandInput(const std::string& id, const std::string& name);

    /// Adds a new Tab input to the command. Tab command inputs contain a set of command inputs and/or group command inputs
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this tab as seen in the dialog.
    /// resourceFolder : An optional parameter that specifies the folder that contains the image for the tab.
    /// If no name is specified (no text on tab), a resourceFolder containing the image to appear
    /// on the tab needs to be provided.
    /// Returns the created TabCommandInput object or null if the creation failed.
    Ptr<TabCommandInput> addTabCommandInput(const std::string& id, const std::string& name, const std::string& resourceFolder = "");

    /// Adds a new Image input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this Image as seen in the dialog.
    /// If a name is not specified (an empty string), the image will be left justified within the dialog.
    /// If a name is specified it will appear as a left justified label aligned with the other command input labels,
    /// and the left side of the image will be aligned with the other command input controls.
    /// imageFile : The full path and file name of the image file.
    /// Supported image format is .png
    /// Images are displayed in the command dialog using their actual size.
    /// Returns the created ImageCommandInput object or null if the creation failed.
    Ptr<ImageCommandInput> addImageCommandInput(const std::string& id, const std::string& name, const std::string& imageFile);

    /// Adds a new distance value input to the command. This displays a field in the command dialog where a
    /// distance value can be entered. It displays the distance in the dialog using current document default unit.
    /// There is also a graphical manipulator associated with the input.
    /// You use the setManipulator method of the returned DistanceValueCommandInput
    /// object to define the position and orientation of the manipulator.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this input as seen in the dialog.
    /// If a name is not specified (an empty string), the input will be centered horizontally within it's row in the dialog.
    /// If a name is specified it will appear as a left justified label aligned with the other command input labels,
    /// and the left side of the image will be aligned with the other command input controls.
    /// initialValue : The initial value of the input. If the value input is a number then it is interpreted as centimeters. If it is
    /// a string it uses the units specified in the string or if no units are specified it uses the active units of the design.
    /// Returns the created DistanceValueCommandInput object or null if the creation failed.
    Ptr<DistanceValueCommandInput> addDistanceValueCommandInput(const std::string& id, const std::string& name, const Ptr<ValueInput>& initialValue);

    /// Adds a new direction command input to the command. The input can be shown as a check box or a button. If it's a button
    /// you need to specify the resource folder to define the icon to use for the Button.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// resourceFolder : Specifies the folder that contains the image for the input.
    /// This is an optional argument. The input is shown as a check box if the resource folder is not set.
    /// Returns the created DirectionCommandInput object or null if the creation failed.
    Ptr<DirectionCommandInput> addDirectionCommandInput(const std::string& id, const std::string& name, const std::string& resourceFolder = "");

    /// Adds a new table command input to the command.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed name of this command as seen in the dialog.
    /// numberOfColumns : This argument is no longer used. The number of columns displayed is inferred by the
    /// number of columns that contain command inputs. As you add command inputs to the table
    /// the display of the table will adjust to show all of the columns that contain a command input.
    /// columnRatio : Sets the width ratio of the columns. This is defined using a string
    /// such as "1:1:1" where this defines that the first three columns are all the same width.
    /// A value of "2:1" defines that the first column is twice the width of the second.
    /// 
    /// If the table has more columns than are defined by this property, they will automatically
    /// default to a value of 1. If this property defines the width of more columns than are
    /// displayed, the extra definitions are ignored.
    /// 
    /// You can also specify 0 as a column width and this will have the effect of hiding
    /// that column. Setting a column width to 0 does not delete the column or the command inputs
    /// but only hides them so they can be turned back on at a later time by resetting the
    /// column ratio.
    /// Returns the created TableCommandInput object or null if the creation failed.
    Ptr<TableCommandInput> addTableCommandInput(const std::string& id, const std::string& name, int numberOfColumns, const std::string& columnRatio);

    /// Adds a new angle value input to the command. This displays a field in the command dialog where an
    /// angle value can be entered. It displays the angle in the dialog using degrees. There is also a graphical
    /// manipulator associated with the input to allow the user to graphically set the value. You use the
    /// setManipulator method of the returned AngleValueCommandInput object to define the position and
    /// orientation of the manipulator.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this input as seen in the dialog.
    /// If a name is not specified (an empty string), the input will be centered horizontally within it's row in the dialog.
    /// If a name is specified it will appear as a left justified label aligned with the other command input labels,
    /// and the left side of the image will be aligned with the other command input controls.
    /// initialValue : The initial value of the input. If the value input is a number then it is interpreted as radians. If it is
    /// a string it uses the units specified in the string or if no units are specified it uses degrees.
    /// Returns the created AngleValueCommandInput object or null if the creation failed.
    Ptr<AngleValueCommandInput> addAngleValueCommandInput(const std::string& id, const std::string& name, const Ptr<ValueInput>& initialValue);

    /// Adds a new command input to the command that behaves as a browser.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// name : The displayed label of this input as seen in the dialog.
    /// 
    /// If a name is not specified (an empty string), the input will be centered horizontally within it's row in the dialog.
    /// If a name is specified, the name will appear as a left justified label aligned with the other command input labels,
    /// and the left side of the input will be aligned with the other command inputs.
    /// htmlFileURL : Specifies the URL to the HTML file that will be displayed in the tab. This can be a local file or on the web.
    /// minimumHeight : Defines the minimum height of the browser within the command dialog. As the user resizes the dialog, the area taken
    /// up by the browser will shrink and grow to fit within the defined space. It will never shrink to be less than the
    /// minimum height or expand to be larger than the maximum height. If the dialog can't fit the browser at the minimum size
    /// a scroll bar will appear for the dialog to allow the user to scroll to access all the inputs in the dialog.
    /// maximumHeight : An optional parameter that specifies the maximum height of the browser within the command dialog. As the user resizes
    /// the dialog, the area taken up by the browser will shrink and grow to fit within the defined space. It will never
    /// shrink to be less than the minimum height or expand to be larger than the maximum height. If the content displayed
    /// within the browser does not fit within the current area, a scroll bar will appear to allow the user to scroll to see
    /// the entire browser content. The default value of zero sets no maximum height, so the browser will expand to the maximum
    /// extent available.
    /// Returns the created BrowserCommandInput object or null if the creation failed.
    Ptr<BrowserCommandInput> addBrowserCommandInput(const std::string& id, const std::string& name, const std::string& htmlFileURL, int minimumHeight, int maximumHeight = 0);

    /// Adds a new triad command input to the command. The input is initially invisible to allow you to define the desired
    /// behavior and then set the isVisible property to true when you're ready to display the triad.
    /// 
    /// The creation of a triad command input results in displaying many input fields in the command dialog. For example,
    /// there can be individual fields for the X, Y, and Z offset distances, the X, Y, and Z scales, the X, Y, and Z angles, etc.
    /// You control which fields are visible by setting properties on the returned TriadCommandInput. Even though each of these
    /// appears as an individual input in the command dialog, and they are all associated with the single TriadCommandInput object.
    /// It also results in graphics widgets being displayed to allow the user to define the values graphically.
    /// 
    /// When a new triad is created, it displays all inputs except those that control scaling. You can use the
    /// properties on the returned triad to define the inputs you want to display further.
    /// 
    /// To simplify your command dialog it can be useful put the TriadCommandInput within a GroupCommandInput so it's
    /// apparent to the user these items are related and they can be collapsed to reduce clutter in the dialog. This
    /// also allows you to label the set of displayed inputs by using the name of the GroupCommandInput.
    /// id : The unique ID of this command input. It must be unique with respect to the other inputs associated with this command.
    /// transform : Defines the initial position and orientation of the manipulator.
    /// Returns the created TriadCommandInput object or null if the creation failed.
    Ptr<TriadCommandInput> addTriadCommandInput(const std::string& id, const Ptr<Matrix3D>& transform);

    typedef CommandInput iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_COMMANDINPUTS_API static const char* classType();
    ADSK_CORE_COMMANDINPUTS_API const char* objectType() const override;
    ADSK_CORE_COMMANDINPUTS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDINPUTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Command* command_raw() const = 0;
    virtual CommandInput* item_raw(size_t index) const = 0;
    virtual CommandInput* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ValueCommandInput* addValueInput_raw(const char* id, const char* name, const char* unitType, ValueInput* initialValue) = 0;
    virtual BoolValueCommandInput* addBoolValueInput_raw(const char* id, const char* name, bool isCheckBox, const char* resourceFolder, bool initialValue) = 0;
    virtual StringValueCommandInput* addStringValueInput_raw(const char* id, const char* name, const char* initialValue) = 0;
    virtual SelectionCommandInput* addSelectionInput_raw(const char* id, const char* name, const char* commandPrompt) = 0;
    virtual DropDownCommandInput* addDropDownCommandInput_raw(const char* id, const char* name, DropDownStyles dropDownStyle) = 0;
    virtual ButtonRowCommandInput* addButtonRowCommandInput_raw(const char* id, const char* name, bool isMultiSelectEnabled) = 0;
    virtual FloatSliderCommandInput* addFloatSliderCommandInput_raw(const char* id, const char* name, const char* unitType, double min, double max, bool hasTwoSliders) = 0;
    virtual FloatSliderCommandInput* addFloatSliderListCommandInput_raw(const char* id, const char* name, const char* unitType, const double* valueList, size_t valueList_size, bool hasTwoSliders) = 0;
    virtual IntegerSliderCommandInput* addIntegerSliderCommandInput_raw(const char* id, const char* name, int min, int max, bool hasTwoSliders) = 0;
    virtual IntegerSliderCommandInput* addIntegerSliderListCommandInput_raw(const char* id, const char* name, const int* valueList, size_t valueList_size, bool hasTwoSliders) = 0;
    virtual TextBoxCommandInput* addTextBoxCommandInput_raw(const char* id, const char* name, const char* formattedText, int numRows, bool isReadOnly) = 0;
    virtual FloatSpinnerCommandInput* addFloatSpinnerCommandInput_raw(const char* id, const char* name, const char* unitType, double min, double max, double spinStep, double initialValue) = 0;
    virtual IntegerSpinnerCommandInput* addIntegerSpinnerCommandInput_raw(const char* id, const char* name, int min, int max, size_t spinStep, int initialValue) = 0;
    virtual RadioButtonGroupCommandInput* addRadioButtonGroupCommandInput_raw(const char* id, const char* name) = 0;
    virtual GroupCommandInput* addGroupCommandInput_raw(const char* id, const char* name) = 0;
    virtual TabCommandInput* addTabCommandInput_raw(const char* id, const char* name, const char* resourceFolder) = 0;
    virtual ImageCommandInput* addImageCommandInput_raw(const char* id, const char* name, const char* imageFile) = 0;
    virtual DistanceValueCommandInput* addDistanceValueCommandInput_raw(const char* id, const char* name, ValueInput* initialValue) = 0;
    virtual DirectionCommandInput* addDirectionCommandInput_raw(const char* id, const char* name, const char* resourceFolder) = 0;
    virtual TableCommandInput* addTableCommandInput_raw(const char* id, const char* name, int numberOfColumns, const char* columnRatio) = 0;
    virtual AngleValueCommandInput* addAngleValueCommandInput_raw(const char* id, const char* name, ValueInput* initialValue) = 0;
    virtual BrowserCommandInput* addBrowserCommandInput_raw(const char* id, const char* name, const char* htmlFileURL, int minimumHeight, int maximumHeight) = 0;
    virtual TriadCommandInput* addTriadCommandInput_raw(const char* id, Matrix3D* transform) = 0;
};

// Inline wrappers

inline Ptr<Command> CommandInputs::command() const
{
    Ptr<Command> res = command_raw();
    return res;
}

inline Ptr<CommandInput> CommandInputs::item(size_t index) const
{
    Ptr<CommandInput> res = item_raw(index);
    return res;
}

inline Ptr<CommandInput> CommandInputs::itemById(const std::string& id) const
{
    Ptr<CommandInput> res = itemById_raw(id.c_str());
    return res;
}

inline size_t CommandInputs::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<ValueCommandInput> CommandInputs::addValueInput(const std::string& id, const std::string& name, const std::string& unitType, const Ptr<ValueInput>& initialValue)
{
    Ptr<ValueCommandInput> res = addValueInput_raw(id.c_str(), name.c_str(), unitType.c_str(), initialValue.get());
    return res;
}

inline Ptr<BoolValueCommandInput> CommandInputs::addBoolValueInput(const std::string& id, const std::string& name, bool isCheckBox, const std::string& resourceFolder, bool initialValue)
{
    Ptr<BoolValueCommandInput> res = addBoolValueInput_raw(id.c_str(), name.c_str(), isCheckBox, resourceFolder.c_str(), initialValue);
    return res;
}

inline Ptr<StringValueCommandInput> CommandInputs::addStringValueInput(const std::string& id, const std::string& name, const std::string& initialValue)
{
    Ptr<StringValueCommandInput> res = addStringValueInput_raw(id.c_str(), name.c_str(), initialValue.c_str());
    return res;
}

inline Ptr<SelectionCommandInput> CommandInputs::addSelectionInput(const std::string& id, const std::string& name, const std::string& commandPrompt)
{
    Ptr<SelectionCommandInput> res = addSelectionInput_raw(id.c_str(), name.c_str(), commandPrompt.c_str());
    return res;
}

inline Ptr<DropDownCommandInput> CommandInputs::addDropDownCommandInput(const std::string& id, const std::string& name, DropDownStyles dropDownStyle)
{
    Ptr<DropDownCommandInput> res = addDropDownCommandInput_raw(id.c_str(), name.c_str(), dropDownStyle);
    return res;
}

inline Ptr<ButtonRowCommandInput> CommandInputs::addButtonRowCommandInput(const std::string& id, const std::string& name, bool isMultiSelectEnabled)
{
    Ptr<ButtonRowCommandInput> res = addButtonRowCommandInput_raw(id.c_str(), name.c_str(), isMultiSelectEnabled);
    return res;
}

inline Ptr<FloatSliderCommandInput> CommandInputs::addFloatSliderCommandInput(const std::string& id, const std::string& name, const std::string& unitType, double min, double max, bool hasTwoSliders)
{
    Ptr<FloatSliderCommandInput> res = addFloatSliderCommandInput_raw(id.c_str(), name.c_str(), unitType.c_str(), min, max, hasTwoSliders);
    return res;
}

inline Ptr<FloatSliderCommandInput> CommandInputs::addFloatSliderListCommandInput(const std::string& id, const std::string& name, const std::string& unitType, const std::vector<double>& valueList, bool hasTwoSliders)
{
    Ptr<FloatSliderCommandInput> res = addFloatSliderListCommandInput_raw(id.c_str(), name.c_str(), unitType.c_str(), valueList.empty() ? nullptr : &valueList[0], valueList.size(), hasTwoSliders);
    return res;
}

inline Ptr<IntegerSliderCommandInput> CommandInputs::addIntegerSliderCommandInput(const std::string& id, const std::string& name, int min, int max, bool hasTwoSliders)
{
    Ptr<IntegerSliderCommandInput> res = addIntegerSliderCommandInput_raw(id.c_str(), name.c_str(), min, max, hasTwoSliders);
    return res;
}

inline Ptr<IntegerSliderCommandInput> CommandInputs::addIntegerSliderListCommandInput(const std::string& id, const std::string& name, const std::vector<int>& valueList, bool hasTwoSliders)
{
    Ptr<IntegerSliderCommandInput> res = addIntegerSliderListCommandInput_raw(id.c_str(), name.c_str(), valueList.empty() ? nullptr : &valueList[0], valueList.size(), hasTwoSliders);
    return res;
}

inline Ptr<TextBoxCommandInput> CommandInputs::addTextBoxCommandInput(const std::string& id, const std::string& name, const std::string& formattedText, int numRows, bool isReadOnly)
{
    Ptr<TextBoxCommandInput> res = addTextBoxCommandInput_raw(id.c_str(), name.c_str(), formattedText.c_str(), numRows, isReadOnly);
    return res;
}

inline Ptr<FloatSpinnerCommandInput> CommandInputs::addFloatSpinnerCommandInput(const std::string& id, const std::string& name, const std::string& unitType, double min, double max, double spinStep, double initialValue)
{
    Ptr<FloatSpinnerCommandInput> res = addFloatSpinnerCommandInput_raw(id.c_str(), name.c_str(), unitType.c_str(), min, max, spinStep, initialValue);
    return res;
}

inline Ptr<IntegerSpinnerCommandInput> CommandInputs::addIntegerSpinnerCommandInput(const std::string& id, const std::string& name, int min, int max, size_t spinStep, int initialValue)
{
    Ptr<IntegerSpinnerCommandInput> res = addIntegerSpinnerCommandInput_raw(id.c_str(), name.c_str(), min, max, spinStep, initialValue);
    return res;
}

inline Ptr<RadioButtonGroupCommandInput> CommandInputs::addRadioButtonGroupCommandInput(const std::string& id, const std::string& name)
{
    Ptr<RadioButtonGroupCommandInput> res = addRadioButtonGroupCommandInput_raw(id.c_str(), name.c_str());
    return res;
}

inline Ptr<GroupCommandInput> CommandInputs::addGroupCommandInput(const std::string& id, const std::string& name)
{
    Ptr<GroupCommandInput> res = addGroupCommandInput_raw(id.c_str(), name.c_str());
    return res;
}

inline Ptr<TabCommandInput> CommandInputs::addTabCommandInput(const std::string& id, const std::string& name, const std::string& resourceFolder)
{
    Ptr<TabCommandInput> res = addTabCommandInput_raw(id.c_str(), name.c_str(), resourceFolder.c_str());
    return res;
}

inline Ptr<ImageCommandInput> CommandInputs::addImageCommandInput(const std::string& id, const std::string& name, const std::string& imageFile)
{
    Ptr<ImageCommandInput> res = addImageCommandInput_raw(id.c_str(), name.c_str(), imageFile.c_str());
    return res;
}

inline Ptr<DistanceValueCommandInput> CommandInputs::addDistanceValueCommandInput(const std::string& id, const std::string& name, const Ptr<ValueInput>& initialValue)
{
    Ptr<DistanceValueCommandInput> res = addDistanceValueCommandInput_raw(id.c_str(), name.c_str(), initialValue.get());
    return res;
}

inline Ptr<DirectionCommandInput> CommandInputs::addDirectionCommandInput(const std::string& id, const std::string& name, const std::string& resourceFolder)
{
    Ptr<DirectionCommandInput> res = addDirectionCommandInput_raw(id.c_str(), name.c_str(), resourceFolder.c_str());
    return res;
}

inline Ptr<TableCommandInput> CommandInputs::addTableCommandInput(const std::string& id, const std::string& name, int numberOfColumns, const std::string& columnRatio)
{
    Ptr<TableCommandInput> res = addTableCommandInput_raw(id.c_str(), name.c_str(), numberOfColumns, columnRatio.c_str());
    return res;
}

inline Ptr<AngleValueCommandInput> CommandInputs::addAngleValueCommandInput(const std::string& id, const std::string& name, const Ptr<ValueInput>& initialValue)
{
    Ptr<AngleValueCommandInput> res = addAngleValueCommandInput_raw(id.c_str(), name.c_str(), initialValue.get());
    return res;
}

inline Ptr<BrowserCommandInput> CommandInputs::addBrowserCommandInput(const std::string& id, const std::string& name, const std::string& htmlFileURL, int minimumHeight, int maximumHeight)
{
    Ptr<BrowserCommandInput> res = addBrowserCommandInput_raw(id.c_str(), name.c_str(), htmlFileURL.c_str(), minimumHeight, maximumHeight);
    return res;
}

inline Ptr<TriadCommandInput> CommandInputs::addTriadCommandInput(const std::string& id, const Ptr<Matrix3D>& transform)
{
    Ptr<TriadCommandInput> res = addTriadCommandInput_raw(id.c_str(), transform.get());
    return res;
}

template <class OutputIterator> inline void CommandInputs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDINPUTS_API