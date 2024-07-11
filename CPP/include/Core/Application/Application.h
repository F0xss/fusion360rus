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
# ifdef __COMPILING_ADSK_CORE_APPLICATION_CPP__
# define ADSK_CORE_APPLICATION_API XI_EXPORT
# else
# define ADSK_CORE_APPLICATION_API
# endif
#else
# define ADSK_CORE_APPLICATION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ApplicationEvent;
    class CameraEvent;
    class CustomEvent;
    class Data;
    class DataEvent;
    class Document;
    class DocumentEvent;
    class Documents;
    class FavoriteAppearances;
    class FavoriteMaterials;
    class ImportManager;
    class MaterialLibraries;
    class MeasureManager;
    class Preferences;
    class Product;
    class User;
    class UserInterface;
    class Viewport;
    class WebRequestEvent;
}}

namespace adsk { namespace core {

/// The top-level object that represents the Fusion 360 application (all of Fusion 360).
/// This provides access to the modeler and files.
class Application : public Base {
public:

    /// Access to the root Application object.
    /// Return the root Application object or null if it failed.
    static Ptr<Application> get();

    /// Returns the Documents collection object which supports accessing
    /// opened documents, opening existing documents, and creating new documents.
    Ptr<Documents> documents() const;

    /// Returns the current active document.
    Ptr<Document> activeDocument() const;

    /// Returns the current active product.
    Ptr<Product> activeProduct() const;

    /// Returns the currently active graphics view.
    Ptr<Viewport> activeViewport() const;

    /// Returns the current edit target as seen in the user interface. This edit target
    /// is defined as the container object that will be added to if something is created.
    /// For example, a component can be an edit target so that when new bodies are created they
    /// are added to that component. A sketch can also be an edit target.
    Ptr<Base> activeEditObject() const;

    /// Returns the Data object which provides access the files.
    Ptr<Data> data() const;

    /// The modeling tolerance used internally when comparing two points. The value is in centimeters.
    double pointTolerance() const;

    /// The modeling tolerance used when comparing vector angles. The value is in radians.
    double vectorAngleTolerance() const;

    /// Provides access to all of the application preferences.
    Ptr<Preferences> preferences() const;

    /// The DocumentOpening event fires at the VERY start of a document being opened.
    /// There is no promise that the document will be opened, hence
    /// a documentOpened event may not follow.
    /// 
    /// When a document is being opened that references other documents, only the
    /// top-level document will cause a documentOpening event to be fired.
    Ptr<DocumentEvent> documentOpening() const;

    /// The DocumentOpened event fires at the VERY end of a document being opened so the
    /// Document object is available to be used.
    /// 
    /// When a document is opened that references other documents, only the top-level
    /// document will cause the documentOpened event to be fired. You can access the
    /// referenced documents by using the documentReferences property of the Document object.
    Ptr<DocumentEvent> documentOpened() const;

    /// Returns information about the last error that occurred.
    /// description : A description of the last error in English.
    /// Returns the number of the specific error.
    int getLastError(std::string* description = nullptr) const;

    /// Provides access to functionality specific to the user interface.
    Ptr<UserInterface> userInterface() const;

    /// Returns the collection of material libraries currently available.
    Ptr<MaterialLibraries> materialLibraries() const;

    /// Returns the set of favorite materials.
    Ptr<FavoriteMaterials> favoriteMaterials() const;

    /// Returns the set of favorite appearances.
    Ptr<FavoriteAppearances> favoriteAppearances() const;

    /// Returns an array containing the names of the products types currently
    /// supported by Fusion 360. For example, the name returned for Fusion 360 is
    /// "DesignProductType". These product type names are used to identify
    /// specific products in some other API functions such as the productType
    /// property on the Workspace and ToolbarPanel objects.
    std::vector<std::string> supportedProductTypes() const;

    /// Returns the ImportManager. You use the ImportManager
    /// to import files (of various neutral formats.) into existing components or new document.
    Ptr<ImportManager> importManager() const;

    /// Returns the user name of the Autodesk account currently logged in.
    std::string userName() const;

    /// Returns the internal name of the Autodesk account currently logged in.
    /// This can be used by applications sold through the Autodesk Exchange Store
    /// to verify that the user has in fact purchased the product.
    std::string userId() const;

    /// Gets and sets if Fusion 360 is offline or not.
    bool isOffLine() const;
    bool isOffLine(bool value);

    /// Boolean property indicating whether Fusion 360 has completed its initialization.
    /// This includes initialization of all the Add-ins loaded at startup.
    bool isStartupComplete() const;

    /// The onlineStatusChanged event fires immediately after Fusion 360 goes online or offline.
    /// This event fires whether or not the online status was changed deliberately by the user by using the Fusion 360
    /// 'Work Offline' command or because of inadvertent network/Internet connectivity issues.
    /// You can get the isOffline property of ApplicationEventArgs to determine whether Fusion 360 has gone Offline or
    /// has come back Online.
    /// The client can add or remove ApplicationEventHandlers from the ApplicationEvent.
    Ptr<ApplicationEvent> onlineStatusChanged() const;

    /// The startupCompleted event fires after Fusion 360 has completed its initialization.
    /// This includes initialization of all the Add-ins loaded at startup.
    /// The client can add or remove ApplicationEventHandlers from the ApplicationEvent.
    Ptr<ApplicationEvent> startupCompleted() const;

    /// Returns the User that is currently logged in.
    Ptr<User> currentUser() const;

    /// The insertingFromURL event fires when the user has clicked a link in a web
    /// page that uses the Fusion 360 protocol handler to insert a file as new component.
    /// This event is fired at the beginning of the request but before Fusion 360 has
    /// take any action so that it's still possible to cancel the operation.
    Ptr<WebRequestEvent> insertingFromURL() const;

    /// The insertedFromURL event fires after the user has clicked a link in a web
    /// page that uses the Fusion 360 protocol handler to insert a file as new component
    /// and that operation has completed.
    Ptr<WebRequestEvent> insertedFromURL() const;

    /// The openingFromURL event fires when the user has clicked a link in a web
    /// page that uses the Fusion 360 protocol handler to create a new file using an
    /// existing file as the initial contents. This event is fired at the beginning
    /// of the request but before Fusion 360 has take any action so that it's still
    /// possible to cancel the operation.
    Ptr<WebRequestEvent> openingFromURL() const;

    /// The openedFromURL event fires after the user has clicked a link in a web
    /// page that uses the Fusion 360 protocol handler to create a new using an existing
    /// file as the initial contents and that operation has completed.
    Ptr<WebRequestEvent> openedFromURL() const;

    /// Returns the current version of the Fusion 360 application.
    std::string version() const;

    /// This registers a new CustomEvent which is intended to be primarily used
    /// to send an event from a worker thread you've created back to your
    /// add-in running in the primary thread. It's also possible that two add-ins
    /// could be cooperating and another add-in can fire the event to your add-in.
    /// eventId : This serves as the unique ID for this event and is used by the worker thread or other
    /// add-in to identify which custom event to fire using the fireCustomEvent method.
    /// Returns the registered CustomEvent or null in the case of failure, which would typically
    /// be because the provided eventId is not unique.
    Ptr<CustomEvent> registerCustomEvent(const std::string& eventId);

    /// Fires a previously registered custom event. This method is used by a worker thread or another
    /// add-in to fire an event to the add-in that registered the event and is running in the primary thread.
    /// 
    /// Firing a custom event does not immediately result in the event handler being called. When a custom
    /// event is fired the event is put on the queue and will be handled in the main thread when Fusion 360 is idle.
    /// eventId : The ID of the custom event you want to fire.
    /// additionalInfo : Any additional information you want to pass through the event to the add-in in the primary thread.
    /// Returns true if the event was successfully added to the event queue. A value of true does not indicate
    /// that the event was fired and handled but only that it's been put on the primary thread's event queue to
    /// be fired when application is idle.
    bool fireCustomEvent(const std::string& eventId, const std::string& additionalInfo = "");

    /// Unregisters an existing CustomEvent.
    /// eventId : Th unique ID of the custom event you want to unregister.
    /// Returns True if the unregister succeeded.
    bool unregisterCustomEvent(const std::string& eventId);

    /// The DocumentCreated event fires when a new document is created.
    Ptr<DocumentEvent> documentCreated() const;

    /// The DocumentClosing event fires at the VERY start of a document being closed.
    /// User can set the isSaveCanceled property of DocumentEventArgs to true to cancel the document close.
    Ptr<DocumentEvent> documentClosing() const;

    /// The DocumentClosed event fires at the VERY end of a document being closed. The
    /// Document object is not longer available because it has been closed.
    Ptr<DocumentEvent> documentClosed() const;

    /// The DocumentSaving event fires at the VERY start of a document being saved.
    /// You can set the isSaveCanceled property of DocumentEventArgs to true to cancel the document save.
    Ptr<DocumentEvent> documentSaving() const;

    /// The DocumentSaved event fires after the save operation has been completed.
    Ptr<DocumentEvent> documentSaved() const;

    /// The DocumentActivating event fires at the VERY start of a document being activated.
    Ptr<DocumentEvent> documentActivating() const;

    /// The DocumentActivated event fires at the VERY end of a document being activated.
    Ptr<DocumentEvent> documentActivated() const;

    /// The DocumentDeactivating event fires at the VERY start of a document being deactivated.
    Ptr<DocumentEvent> documentDeactivating() const;

    /// The DocumentDeactivated event fires at the VERY end of a document being deactivated.
    Ptr<DocumentEvent> documentDeactivated() const;

    /// The cameraChanged event fires immediately after a change in the camera has been made.
    /// Camera changes happen when user changes the view by rotating, zooming in or out, panning,
    /// changing from parallel to perspective, or when the extents of the viewport changes.
    /// 
    /// You can add or remove event handlers from the CameraEvent.
    Ptr<CameraEvent> cameraChanged() const;

    /// Get the MeasureManager object which can be used to perform measurements of geometry.
    Ptr<MeasureManager> measureManager() const;

    /// Executes the input text command.
    /// command : The text command to execute.
    /// Returns the result of the input text command.
    std::string executeTextCommand(const std::string& command) const;

    /// Logs messages to either the TEXT COMMAND window or the Fusion app log file.
    /// message : The message to write to the log.
    /// level : The log level. Default value is InfoLogLevel. This is only used when the log type is FileLogType where the
    /// log message will include the log level.
    /// type : The log type. The default value is ConsoleLogType to write the message to the TEXT COMMAND window. When the
    /// type is FileLogType, the message is written to Fusion's app log file which is the same file where Fusion writes
    /// all of its log messages. You can get the path and filename of the current log file by using the TEXT COMMAND window.
    /// In the lower-right corner you can choose "Txt", "Py", or "Js". Choose the "Txt" option and type "paths.get" in the
    /// input field and press return. A list of all of the various paths used by Fusion will be displayed in the TEXT COMMAND
    /// window. The line for "AppLogFilePath" has the full path to the log file.
    static void log(const std::string& message, LogLevels level = adsk::core::InfoLogLevel, LogTypes type = adsk::core::ConsoleLogType);

    /// The dataFileComplete event fires when a data file upload has completed including any cloud side translations.
    Ptr<DataEvent> dataFileComplete() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets the authentication token to use for this session. Not valid when running in a user context.
    std::string token() const;
    bool token(const std::string& value);

    /// Gets whether there are any active jobs.
    bool hasActiveJobs() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Gets and sets a description to be used as the default in the crash reporting mechanism.
    std::string crashDescription() const;
    bool crashDescription(const std::string& value);

    /// Returns the names of all of the fonts that are available in Fusion when creating text.
    std::vector<std::string> fontNames() const;

    ADSK_CORE_APPLICATION_API static const char* classType();
    ADSK_CORE_APPLICATION_API const char* objectType() const override;
    ADSK_CORE_APPLICATION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_APPLICATION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_APPLICATION_API static Application* get_raw();
    virtual Documents* documents_raw() const = 0;
    virtual Document* activeDocument_raw() const = 0;
    virtual Product* activeProduct_raw() const = 0;
    virtual Viewport* activeViewport_raw() const = 0;
    virtual Base* activeEditObject_raw() const = 0;
    virtual Data* data_raw() const = 0;
    virtual double pointTolerance_raw() const = 0;
    virtual double vectorAngleTolerance_raw() const = 0;
    virtual Preferences* preferences_raw() const = 0;
    virtual DocumentEvent* documentOpening_raw() const = 0;
    virtual DocumentEvent* documentOpened_raw() const = 0;
    virtual int getLastError_raw(char** description) const = 0;
    virtual UserInterface* userInterface_raw() const = 0;
    virtual MaterialLibraries* materialLibraries_raw() const = 0;
    virtual FavoriteMaterials* favoriteMaterials_raw() const = 0;
    virtual FavoriteAppearances* favoriteAppearances_raw() const = 0;
    virtual char** supportedProductTypes_raw(size_t& return_size) const = 0;
    virtual ImportManager* importManager_raw() const = 0;
    virtual char* userName_raw() const = 0;
    virtual char* userId_raw() const = 0;
    virtual bool isOffLine_raw() const = 0;
    virtual bool isOffLine_raw(bool value) = 0;
    virtual bool isStartupComplete_raw() const = 0;
    virtual ApplicationEvent* onlineStatusChanged_raw() const = 0;
    virtual ApplicationEvent* startupCompleted_raw() const = 0;
    virtual User* currentUser_raw() const = 0;
    virtual WebRequestEvent* insertingFromURL_raw() const = 0;
    virtual WebRequestEvent* insertedFromURL_raw() const = 0;
    virtual WebRequestEvent* openingFromURL_raw() const = 0;
    virtual WebRequestEvent* openedFromURL_raw() const = 0;
    virtual char* version_raw() const = 0;
    virtual CustomEvent* registerCustomEvent_raw(const char* eventId) = 0;
    virtual bool fireCustomEvent_raw(const char* eventId, const char* additionalInfo) = 0;
    virtual bool unregisterCustomEvent_raw(const char* eventId) = 0;
    virtual DocumentEvent* documentCreated_raw() const = 0;
    virtual DocumentEvent* documentClosing_raw() const = 0;
    virtual DocumentEvent* documentClosed_raw() const = 0;
    virtual DocumentEvent* documentSaving_raw() const = 0;
    virtual DocumentEvent* documentSaved_raw() const = 0;
    virtual DocumentEvent* documentActivating_raw() const = 0;
    virtual DocumentEvent* documentActivated_raw() const = 0;
    virtual DocumentEvent* documentDeactivating_raw() const = 0;
    virtual DocumentEvent* documentDeactivated_raw() const = 0;
    virtual CameraEvent* cameraChanged_raw() const = 0;
    virtual MeasureManager* measureManager_raw() const = 0;
    virtual char* executeTextCommand_raw(const char* command) const = 0;
    ADSK_CORE_APPLICATION_API static void log_raw(const char* message, LogLevels level, LogTypes type);
    virtual DataEvent* dataFileComplete_raw() const = 0;
    virtual char* token_raw() const = 0;
    virtual bool token_raw(const char* value) = 0;
    virtual bool hasActiveJobs_raw() const = 0;
    virtual char* crashDescription_raw() const = 0;
    virtual bool crashDescription_raw(const char* value) = 0;
    virtual char** fontNames_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<Application> Application::get()
{
    Ptr<Application> res = get_raw();
    return res;
}

inline Ptr<Documents> Application::documents() const
{
    Ptr<Documents> res = documents_raw();
    return res;
}

inline Ptr<Document> Application::activeDocument() const
{
    Ptr<Document> res = activeDocument_raw();
    return res;
}

inline Ptr<Product> Application::activeProduct() const
{
    Ptr<Product> res = activeProduct_raw();
    return res;
}

inline Ptr<Viewport> Application::activeViewport() const
{
    Ptr<Viewport> res = activeViewport_raw();
    return res;
}

inline Ptr<Base> Application::activeEditObject() const
{
    Ptr<Base> res = activeEditObject_raw();
    return res;
}

inline Ptr<Data> Application::data() const
{
    Ptr<Data> res = data_raw();
    return res;
}

inline double Application::pointTolerance() const
{
    double res = pointTolerance_raw();
    return res;
}

inline double Application::vectorAngleTolerance() const
{
    double res = vectorAngleTolerance_raw();
    return res;
}

inline Ptr<Preferences> Application::preferences() const
{
    Ptr<Preferences> res = preferences_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentOpening() const
{
    Ptr<DocumentEvent> res = documentOpening_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentOpened() const
{
    Ptr<DocumentEvent> res = documentOpened_raw();
    return res;
}

inline int Application::getLastError(std::string* description) const
{
    char** description_ = nullptr;
    char* description__ = nullptr;
    if(description)
        description_ = &description__;

    int res = getLastError_raw(description_);
    if(description && description__)
    {
        *description = description__;
    }
    DeallocateArray(description__);
    return res;
}

inline Ptr<UserInterface> Application::userInterface() const
{
    Ptr<UserInterface> res = userInterface_raw();
    return res;
}

inline Ptr<MaterialLibraries> Application::materialLibraries() const
{
    Ptr<MaterialLibraries> res = materialLibraries_raw();
    return res;
}

inline Ptr<FavoriteMaterials> Application::favoriteMaterials() const
{
    Ptr<FavoriteMaterials> res = favoriteMaterials_raw();
    return res;
}

inline Ptr<FavoriteAppearances> Application::favoriteAppearances() const
{
    Ptr<FavoriteAppearances> res = favoriteAppearances_raw();
    return res;
}

inline std::vector<std::string> Application::supportedProductTypes() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= supportedProductTypes_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<ImportManager> Application::importManager() const
{
    Ptr<ImportManager> res = importManager_raw();
    return res;
}

inline std::string Application::userName() const
{
    std::string res;

    char* p= userName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string Application::userId() const
{
    std::string res;

    char* p= userId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Application::isOffLine() const
{
    bool res = isOffLine_raw();
    return res;
}

inline bool Application::isOffLine(bool value)
{
    return isOffLine_raw(value);
}

inline bool Application::isStartupComplete() const
{
    bool res = isStartupComplete_raw();
    return res;
}

inline Ptr<ApplicationEvent> Application::onlineStatusChanged() const
{
    Ptr<ApplicationEvent> res = onlineStatusChanged_raw();
    return res;
}

inline Ptr<ApplicationEvent> Application::startupCompleted() const
{
    Ptr<ApplicationEvent> res = startupCompleted_raw();
    return res;
}

inline Ptr<User> Application::currentUser() const
{
    Ptr<User> res = currentUser_raw();
    return res;
}

inline Ptr<WebRequestEvent> Application::insertingFromURL() const
{
    Ptr<WebRequestEvent> res = insertingFromURL_raw();
    return res;
}

inline Ptr<WebRequestEvent> Application::insertedFromURL() const
{
    Ptr<WebRequestEvent> res = insertedFromURL_raw();
    return res;
}

inline Ptr<WebRequestEvent> Application::openingFromURL() const
{
    Ptr<WebRequestEvent> res = openingFromURL_raw();
    return res;
}

inline Ptr<WebRequestEvent> Application::openedFromURL() const
{
    Ptr<WebRequestEvent> res = openedFromURL_raw();
    return res;
}

inline std::string Application::version() const
{
    std::string res;

    char* p= version_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<CustomEvent> Application::registerCustomEvent(const std::string& eventId)
{
    Ptr<CustomEvent> res = registerCustomEvent_raw(eventId.c_str());
    return res;
}

inline bool Application::fireCustomEvent(const std::string& eventId, const std::string& additionalInfo)
{
    bool res = fireCustomEvent_raw(eventId.c_str(), additionalInfo.c_str());
    return res;
}

inline bool Application::unregisterCustomEvent(const std::string& eventId)
{
    bool res = unregisterCustomEvent_raw(eventId.c_str());
    return res;
}

inline Ptr<DocumentEvent> Application::documentCreated() const
{
    Ptr<DocumentEvent> res = documentCreated_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentClosing() const
{
    Ptr<DocumentEvent> res = documentClosing_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentClosed() const
{
    Ptr<DocumentEvent> res = documentClosed_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentSaving() const
{
    Ptr<DocumentEvent> res = documentSaving_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentSaved() const
{
    Ptr<DocumentEvent> res = documentSaved_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentActivating() const
{
    Ptr<DocumentEvent> res = documentActivating_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentActivated() const
{
    Ptr<DocumentEvent> res = documentActivated_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentDeactivating() const
{
    Ptr<DocumentEvent> res = documentDeactivating_raw();
    return res;
}

inline Ptr<DocumentEvent> Application::documentDeactivated() const
{
    Ptr<DocumentEvent> res = documentDeactivated_raw();
    return res;
}

inline Ptr<CameraEvent> Application::cameraChanged() const
{
    Ptr<CameraEvent> res = cameraChanged_raw();
    return res;
}

inline Ptr<MeasureManager> Application::measureManager() const
{
    Ptr<MeasureManager> res = measureManager_raw();
    return res;
}

inline std::string Application::executeTextCommand(const std::string& command) const
{
    std::string res;

    char* p= executeTextCommand_raw(command.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline void Application::log(const std::string& message, LogLevels level, LogTypes type)
{
    log_raw(message.c_str(), level, type);
}

inline Ptr<DataEvent> Application::dataFileComplete() const
{
    Ptr<DataEvent> res = dataFileComplete_raw();
    return res;
}

inline std::string Application::token() const
{
    std::string res;

    char* p= token_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Application::token(const std::string& value)
{
    return token_raw(value.c_str());
}

inline bool Application::hasActiveJobs() const
{
    bool res = hasActiveJobs_raw();
    return res;
}

inline std::string Application::crashDescription() const
{
    std::string res;

    char* p= crashDescription_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Application::crashDescription(const std::string& value)
{
    return crashDescription_raw(value.c_str());
}

inline std::vector<std::string> Application::fontNames() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= fontNames_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_APPLICATION_API