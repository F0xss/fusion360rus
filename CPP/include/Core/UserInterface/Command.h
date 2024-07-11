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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COMMAND_CPP__
# define ADSK_CORE_COMMAND_API XI_EXPORT
# else
# define ADSK_CORE_COMMAND_API
# endif
#else
# define ADSK_CORE_COMMAND_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandDefinition;
    class CommandEvent;
    class CommandInputs;
    class HTMLEvent;
    class InputChangedEvent;
    class KeyboardEvent;
    class MouseEvent;
    class NavigationEvent;
    class SelectionEvent;
    class ValidateInputsEvent;
}}

namespace adsk { namespace core {

/// The Command class contains all of the functionality needed by a command to gather
/// various command input from a user, provide previews, and create the final result
/// which is also encapsulated within a transaction so it can be undone.
class Command : public Base {
public:

    /// Gets the parent CommandDefinition object.
    Ptr<CommandDefinition> parentCommandDefinition() const;

    /// Gets an event that is fired when the command is first activated or re-activated after being suspended.
    /// Returns a CommandEvent object that is used to connect and release from the event.
    Ptr<CommandEvent> activate() const;

    /// Gets an event that is fired when the command is deactivated. The command still exists and could still be activated again.
    /// Returns a CommandEvent object that is used to connect and release from the event.
    Ptr<CommandEvent> deactivate() const;

    /// Gets an event that is fired when the command is destroyed. The command is destroyed and can be cleaned up.
    /// Returns a CommandEvent object that is used to connect and release from the event.
    Ptr<CommandEvent> destroy() const;

    /// Gets an event that is fired when the command has completed gathering the required input and now
    /// needs to perform whatever action the command does.
    /// Returns a CommandEvent object that is used to connect and release from the event.
    Ptr<CommandEvent> execute() const;

    /// Gets an event that is fired when the command has completed gathering the required input and now
    /// needs to perform a preview.
    /// Returns a CommandEvent object that is used to connect and release from the event.
    Ptr<CommandEvent> executePreview() const;

    /// Gets the associated CommandInputs object which provides the ability
    /// to create new command inputs and provides access to any existing inputs
    /// that have already been created for this command.
    Ptr<CommandInputs> commandInputs() const;

    /// Gets an event that is fired whenever an input value is changed.
    /// Returns an InputChangedEvent object that is used to connect and release from the event.
    Ptr<InputChangedEvent> inputChanged() const;

    /// Gets an event that is fired to allow you to check if the current state of the inputs are valid for execution.
    /// Returns a ValidateInputsEvent object that is used to connect and release from the event.
    Ptr<ValidateInputsEvent> validateInputs() const;

    /// Gets an event that is fired when a key on the keyboard is pressed down.
    Ptr<KeyboardEvent> keyDown() const;

    /// Gets an event that is fired when a key on the keyboard goes up.
    Ptr<KeyboardEvent> keyUp() const;

    /// Gets an event that is fired when the mouse is clicked, (a button is pressed and released).
    Ptr<MouseEvent> mouseClick() const;

    /// Gets an event that is fired when the mouse is double-clicked, (clicked twice within the time specified by a system setting.)
    Ptr<MouseEvent> mouseDoubleClick() const;

    /// Gets an event that is fired when a mouse button is pressed.
    Ptr<MouseEvent> mouseDown() const;

    /// Gets an event that is fired when the mouse is moved.
    Ptr<MouseEvent> mouseMove() const;

    /// Gets an event that is fired when a mouse button is released.
    Ptr<MouseEvent> mouseUp() const;

    /// Gets an event that is fired when the mouse wheel is rotated.
    Ptr<MouseEvent> mouseWheel() const;

    /// Gets an event that is fired when a mouse drag starts,
    /// (the mouse is pressed and moved).
    Ptr<MouseEvent> mouseDragBegin() const;

    /// Gets an event that is fired when the mouse is in drag mode,
    /// (being moved while a button is pressed).
    Ptr<MouseEvent> mouseDrag() const;

    /// Gets an event that is fired when the mouse button is released after a drag.
    Ptr<MouseEvent> mouseDragEnd() const;

    /// Specifies if the OK button is visible or not.
    /// If set to false then the OK button is removed and the
    /// "CANCEL" button text changes to "CLOSE". You can override
    /// the default button text using the cancelButtonText property.
    bool isOKButtonVisible() const;
    bool isOKButtonVisible(bool value);

    /// Gets and sets the text displayed on the OK button. When the OK and Cancel
    /// buttons are displayed, this text defaults to "OK". If the Cancel button
    /// is not displayed the text defaults to "CLOSE".
    std::string okButtonText() const;
    bool okButtonText(const std::string& value);

    /// Gets and sets the text displayed on the Cancel button. The value of this
    /// property is ignored if the isCancelButtonVisible property is false.
    std::string cancelButtonText() const;
    bool cancelButtonText(const std::string& value);

    /// Sets the initial size of the dialog when it is first displayed. If this is not
    /// set, Fusion 360 will use a default size for the dialog.
    /// width : The width of the dialog in pixels.
    /// height : The height of the dialog in pixels.
    /// Returns true if the default size was successfully set.
    bool setDialogInitialSize(int width, int height);

    /// Sets the minimum size for the dialog when resized to by the user. If this is not
    /// set, a default minimum size is used.
    /// width : The minimum width of the dialog in pixels.
    /// height : The minimum height of the dialog in pixels.
    /// Returns true if the minimum size was successfully set.
    bool setDialogMinimumSize(int width, int height);

    /// Gets and Sets if this command is repeatable using the 'Repeat Last Command' option from the Fusion 360 marking menu.
    bool isRepeatable() const;
    bool isRepeatable(bool value);

    /// !!!!! Warning !!!!!
    /// ! This has been retired; please see the help for more info
    /// !!!!! Warning !!!!!
    /// 
    /// Provides a notification when the mouse passes over an entity allowing you to determine if the
    /// entity should be available for selection or not.
    Ptr<SelectionEvent> selectionEvent() const;

    /// Specifies what the behavior will be when a command is preempted by the user executing another
    /// command. If true (the default), and all of the current inputs are valid, the command will be
    /// executed just the same as if the user clicked the OK button. If false, the command is terminated.
    bool isExecutedWhenPreEmpted() const;
    bool isExecutedWhenPreEmpted(bool value);

    /// Gets and sets the associated HTML help file for this command.
    std::string helpFile() const;
    bool helpFile(const std::string& value);

    /// Gets and sets whether this command will automatically execute if no command inputs have been
    /// defined. If any command inputs have been created, the value of this property is ignored and
    /// the command dialog will be displayed and the command will execute when the user clicks 'OK'.
    /// if no command inputs have been defined and this is set to False, then the command will not
    /// execute but will remain running.
    /// 
    /// The default value for this property is true so that the command will execute if no command inputs
    /// have been defined.
    bool isAutoExecute() const;
    bool isAutoExecute(bool value);

    /// Causes the execution of this command which results in the execute event being fired. This is the
    /// same effect as the user clicking the "OK" button in the command dialog and is most useful when there
    /// is no command dialog (no command inputs where created) and the isAutoExecute property has been set
    /// to False. This allows you to execute the command through code.
    /// terminate : In the case where there isn't a command dialog you can also use the terminate argument to specify if
    /// the command should terminate after execution or continue running. This is similar to the sketch line
    /// command where each line placement results in the creation of an undo-able line but the command continues
    /// to run to allow additional lines to be placed.
    /// Returns true if the execution of the command was successful.
    bool doExecute(bool terminate);

    /// Causes the executePreview event of this command to be fired. This is most useful when there
    /// is no command dialog (no command inputs where created) and the isAutoExecute property has been set
    /// to False. This allows you to force the preview to be generated instead of relying on changing
    /// command inputs.
    /// Returns true if the execute Preview event was successfully fired..
    bool doExecutePreview();

    /// When working in a parametric design in Fusion and you move any occurrences, those move operations are
    /// pending and aren't captured until you use the "Capture Position" command from the POSITION panel or
    /// use the "Revert" command from the same panel to move them all back to their original positions. If
    /// the design is in a pending situation and you run a command like "Create Sketch", a dialog appears
    /// asking if you want to capture the current position or not before continuing. This is because
    /// the creation of a sketch can be dependent on the current positions of occurrences in the design. Other commands, like
    /// "Fillet", depend directly on model geometry and do not rely on occurrence positions so running the Fillet command
    /// does not display the dialog and does not affect the pending state of the occurrences.
    /// 
    /// This property allows you to specify if your command is dependent on the current position of occurrences
    /// or not. One good way to know if your command is dependent or not is to run the commands in the UI that are
    /// equivalent to the API functions you're using and see if the dialog that prompts to save or abort appears.
    /// If it does, then you know your command is dependent on occurrence positions.
    /// 
    /// If this property is true, then the dialog will appear if there are any pending moved occurrences.
    /// The user can choose whether to capture the current changes or abort them, and then your command will continue.
    /// 
    /// If you set this property to false, (which is the default), then even if there are pending changes, the occurrences
    /// are left in their current positions and your command will run.
    bool isPositionDependent() const;
    bool isPositionDependent(bool value);

    /// Specifies the cursor to display at the mouse.
    /// cursorImage : The path to the PNG image to display as the cursor. This can either be a relative path from the py, dll, or dylib file
    /// of the full path. Specifying an empty string will set the cursor back to the default cursor.
    /// xHotSpot : Specifies the position of the x pixel within the image that is the "hot" spot or the point that is used as the mouse point. A value of
    /// zero indicates the far left of the image. If an empty string is used as the cursorImage, this value is ignored.
    /// yHotSpot : Specifies the position of the y pixel within the image that is the "hot" spot or the point that is used as the mouse point. A value of
    /// zero indicates the top of the image. If an empty string is used as the cursorImage, this value is ignored.
    /// Returns true if setting the cursor was successful.
    bool setCursor(const std::string& cursorImage, int xHotSpot, int yHotSpot);

    /// Gets the custom cursor information currently being used.
    /// cursorImage : The full path to the png image that is being displayed as the cursor.
    /// xHotSpot : Gets the position of the x pixel within the image that is the "hot" spot or the point that is used as the mouse point. A value of
    /// zero indicates the left of the image.
    /// yHotSpot : Gets the position of the y pixel within the image that is the "hot" spot or the point that is used as the mouse point. A value of
    /// zero indicates the top of the image.
    /// Returns true if getting the cursor information was successful.
    bool getCursor(std::string& cursorImage, int& xHotSpot, int& yHotSpot);

    /// This event is used to be able to participate in the selection process in a dynamic way.
    /// When a user is selecting geometry, they move the mouse over the model and if the
    /// entity the mouse is currently over is valid for selection it will highlight indicating that
    /// it can be selected. This process of determining what is available for selection and highlighting
    /// it is referred to as the "preselect" behavior.
    /// 
    /// You use functions on the SelectionCommandInput object to define what types of entities are
    /// selectable and in many cases this coarse level of specification is all that's needed, but in other
    /// cases you may need more control over the selection. For example, you might want to allow the user to
    /// selection construction planes and planar faces, which can easily be controlled by defining those as
    /// valid entities for selection in the SelectionCommandInput object. But if you only want to allow the
    /// user to select planes that are parallel then you need some dynamic control over the selection, which
    /// can be done using the preSelect event.
    /// 
    /// In the example of selecting parallel planes, you would still set the valid selection types for the
    /// SelectionCommandInput to allow selection of construction planes and planar faces. This will limit
    /// the selection to only planes but any plane can still be selected. You'll also need to connect to the
    /// preSelect event for the command. As the user moves the mouse over any construction plane
    /// or planar face, the preSelect event will fire for the plane the mouse is current over. If no planes
    /// have yet been selected, then you allow the user to select this plane. If one or more planes have
    /// already selected, then in the preSelect event you'll check to see if the plane the mouse is over is
    /// parallel to the first plane already selected. If it is then you allow it to be selected. If it isn't
    /// parallel then you set the isSelectable property of the provided SelectEventArgs object to False so
    /// that it won't pre-highlight and won't be selectable.
    /// 
    /// The entity and mouse position on the entity can be obtained through the Selection object returned
    /// through the selection property of the SelectionEventArgs object provided through the event.
    Ptr<SelectionEvent> preSelect() const;

    /// This event fires continually while the mouse is moved over an entity that is valid for selected.
    /// 
    /// The entity and mouse position on the entity can be obtained through the Selection object returned
    /// through the selection property of the SelectionEventArgs object provided through the event.
    Ptr<SelectionEvent> preSelectMouseMove() const;

    /// This event fires when the moused is moved away from an entity that was in a preselect state. If
    /// your add-in has done something in reaction to the preSelect, like draw some custom graphics, this
    /// event provides the notification to clean up whatever you've done that's associated with the current
    /// pre-select.
    /// 
    /// The entity and mouse position on the entity can be obtained through the Selection object returned
    /// through the selection property of the SelectionEventArgs object provided through the event.
    Ptr<SelectionEvent> preSelectEnd() const;

    /// This even fires when the user selects an entity. This is different from the preselect where an
    /// entity is shown as being available for selection as the mouse passes over the entity. This is the actual
    /// selection where the user has clicked the mouse on the entity.
    /// 
    /// The entity and mouse position on the entity can be obtained through the Selection object returned
    /// through the selection property of the SelectionEventArgs object provided through the event.
    Ptr<SelectionEvent> select() const;

    /// This even fires when the user unselects an entity by clicking the mouse again on selected entity
    /// or canceling previous selection.
    /// 
    /// The entity and mouse position on the entity can be obtained through the Selection object returned
    /// through the selection property of the SelectionEventArgs object provided through the event.
    Ptr<SelectionEvent> unselect() const;

    /// Begin a transacted step within the command's transaction.
    /// If the all of the command inputs are valid, this will trigger the execute event for the current step.
    /// makeExistingStepNonUndoable : If true the current step will not be undo-able.
    /// Returns true if beginning the step was successful.
    bool beginStep(bool makeExistingStepNonUndoable = false);

    /// Sets the editing feature for this command. The timeline will be rolled to the editing feature
    /// on activate and will the current position will be restored on deactivate.
    Ptr<Base> editingFeature() const;
    bool editingFeature(const Ptr<Base>& value);

    /// This event is fired when the JavaScript associated with the HTML displayed in a
    /// BrowserCommandInput calls the adsk.fusionSendData function and when the JavaScript
    /// responds to the sendInfoToHTML call. The HTMLEventArgs provided by the event indicates
    /// which BrowserCommandInput triggered the event.
    Ptr<HTMLEvent> incomingFromHTML() const;

    /// This event is fired when a navigation event occurs on the page displayed within a
    /// BrowserCommandInput. This allows the add-in to determine how this navigation should
    /// be handled by the browser. The NavigationEventArgs provided by the event indicates
    /// which BrowserCommandInput triggered the event.
    Ptr<NavigationEvent> navigatingURL() const;

    /// As the mouse moves over entities in the graphics window, entities valid for selection are highlighted.
    /// Before an entity is highlighted, Fusion determines if it is a valid selectable entity using the selection
    /// filter defined on the SelectionCommandInput and the preSelect event of the command. The preSelectStart
    /// event fires when the mouse first moves over an entity valid for selection. You can obtain the entity
    /// and mouse position from the Selection object returned by the selection property of the SelectionEventArgs
    /// object provided through the event.
    /// 
    /// Some related events are the preSelectMouseMove event, which fires as the mouse moves across the entity,
    /// and the preSelectEnd event, which fires when the mouse moves off the entity.
    Ptr<SelectionEvent> preSelectStart() const;

    ADSK_CORE_COMMAND_API static const char* classType();
    ADSK_CORE_COMMAND_API const char* objectType() const override;
    ADSK_CORE_COMMAND_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMAND_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandDefinition* parentCommandDefinition_raw() const = 0;
    virtual CommandEvent* activate_raw() const = 0;
    virtual CommandEvent* deactivate_raw() const = 0;
    virtual CommandEvent* destroy_raw() const = 0;
    virtual CommandEvent* execute_raw() const = 0;
    virtual CommandEvent* executePreview_raw() const = 0;
    virtual CommandInputs* commandInputs_raw() const = 0;
    virtual InputChangedEvent* inputChanged_raw() const = 0;
    virtual ValidateInputsEvent* validateInputs_raw() const = 0;
    virtual KeyboardEvent* keyDown_raw() const = 0;
    virtual KeyboardEvent* keyUp_raw() const = 0;
    virtual MouseEvent* mouseClick_raw() const = 0;
    virtual MouseEvent* mouseDoubleClick_raw() const = 0;
    virtual MouseEvent* mouseDown_raw() const = 0;
    virtual MouseEvent* mouseMove_raw() const = 0;
    virtual MouseEvent* mouseUp_raw() const = 0;
    virtual MouseEvent* mouseWheel_raw() const = 0;
    virtual MouseEvent* mouseDragBegin_raw() const = 0;
    virtual MouseEvent* mouseDrag_raw() const = 0;
    virtual MouseEvent* mouseDragEnd_raw() const = 0;
    virtual bool isOKButtonVisible_raw() const = 0;
    virtual bool isOKButtonVisible_raw(bool value) = 0;
    virtual char* okButtonText_raw() const = 0;
    virtual bool okButtonText_raw(const char* value) = 0;
    virtual char* cancelButtonText_raw() const = 0;
    virtual bool cancelButtonText_raw(const char* value) = 0;
    virtual bool setDialogInitialSize_raw(int width, int height) = 0;
    virtual bool setDialogMinimumSize_raw(int width, int height) = 0;
    virtual bool isRepeatable_raw() const = 0;
    virtual bool isRepeatable_raw(bool value) = 0;
    virtual SelectionEvent* selectionEvent_raw() const = 0;
    virtual bool isExecutedWhenPreEmpted_raw() const = 0;
    virtual bool isExecutedWhenPreEmpted_raw(bool value) = 0;
    virtual char* helpFile_raw() const = 0;
    virtual bool helpFile_raw(const char* value) = 0;
    virtual bool isAutoExecute_raw() const = 0;
    virtual bool isAutoExecute_raw(bool value) = 0;
    virtual bool doExecute_raw(bool terminate) = 0;
    virtual bool doExecutePreview_raw() = 0;
    virtual bool isPositionDependent_raw() const = 0;
    virtual bool isPositionDependent_raw(bool value) = 0;
    virtual bool setCursor_raw(const char* cursorImage, int xHotSpot, int yHotSpot) = 0;
    virtual bool getCursor_raw(char*& cursorImage, int& xHotSpot, int& yHotSpot) = 0;
    virtual SelectionEvent* preSelect_raw() const = 0;
    virtual SelectionEvent* preSelectMouseMove_raw() const = 0;
    virtual SelectionEvent* preSelectEnd_raw() const = 0;
    virtual SelectionEvent* select_raw() const = 0;
    virtual SelectionEvent* unselect_raw() const = 0;
    virtual bool beginStep_raw(bool makeExistingStepNonUndoable) = 0;
    virtual Base* editingFeature_raw() const = 0;
    virtual bool editingFeature_raw(Base* value) = 0;
    virtual HTMLEvent* incomingFromHTML_raw() const = 0;
    virtual NavigationEvent* navigatingURL_raw() const = 0;
    virtual SelectionEvent* preSelectStart_raw() const = 0;
};

// Inline wrappers

inline Ptr<CommandDefinition> Command::parentCommandDefinition() const
{
    Ptr<CommandDefinition> res = parentCommandDefinition_raw();
    return res;
}

inline Ptr<CommandEvent> Command::activate() const
{
    Ptr<CommandEvent> res = activate_raw();
    return res;
}

inline Ptr<CommandEvent> Command::deactivate() const
{
    Ptr<CommandEvent> res = deactivate_raw();
    return res;
}

inline Ptr<CommandEvent> Command::destroy() const
{
    Ptr<CommandEvent> res = destroy_raw();
    return res;
}

inline Ptr<CommandEvent> Command::execute() const
{
    Ptr<CommandEvent> res = execute_raw();
    return res;
}

inline Ptr<CommandEvent> Command::executePreview() const
{
    Ptr<CommandEvent> res = executePreview_raw();
    return res;
}

inline Ptr<CommandInputs> Command::commandInputs() const
{
    Ptr<CommandInputs> res = commandInputs_raw();
    return res;
}

inline Ptr<InputChangedEvent> Command::inputChanged() const
{
    Ptr<InputChangedEvent> res = inputChanged_raw();
    return res;
}

inline Ptr<ValidateInputsEvent> Command::validateInputs() const
{
    Ptr<ValidateInputsEvent> res = validateInputs_raw();
    return res;
}

inline Ptr<KeyboardEvent> Command::keyDown() const
{
    Ptr<KeyboardEvent> res = keyDown_raw();
    return res;
}

inline Ptr<KeyboardEvent> Command::keyUp() const
{
    Ptr<KeyboardEvent> res = keyUp_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseClick() const
{
    Ptr<MouseEvent> res = mouseClick_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseDoubleClick() const
{
    Ptr<MouseEvent> res = mouseDoubleClick_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseDown() const
{
    Ptr<MouseEvent> res = mouseDown_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseMove() const
{
    Ptr<MouseEvent> res = mouseMove_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseUp() const
{
    Ptr<MouseEvent> res = mouseUp_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseWheel() const
{
    Ptr<MouseEvent> res = mouseWheel_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseDragBegin() const
{
    Ptr<MouseEvent> res = mouseDragBegin_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseDrag() const
{
    Ptr<MouseEvent> res = mouseDrag_raw();
    return res;
}

inline Ptr<MouseEvent> Command::mouseDragEnd() const
{
    Ptr<MouseEvent> res = mouseDragEnd_raw();
    return res;
}

inline bool Command::isOKButtonVisible() const
{
    bool res = isOKButtonVisible_raw();
    return res;
}

inline bool Command::isOKButtonVisible(bool value)
{
    return isOKButtonVisible_raw(value);
}

inline std::string Command::okButtonText() const
{
    std::string res;

    char* p= okButtonText_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Command::okButtonText(const std::string& value)
{
    return okButtonText_raw(value.c_str());
}

inline std::string Command::cancelButtonText() const
{
    std::string res;

    char* p= cancelButtonText_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Command::cancelButtonText(const std::string& value)
{
    return cancelButtonText_raw(value.c_str());
}

inline bool Command::setDialogInitialSize(int width, int height)
{
    bool res = setDialogInitialSize_raw(width, height);
    return res;
}

inline bool Command::setDialogMinimumSize(int width, int height)
{
    bool res = setDialogMinimumSize_raw(width, height);
    return res;
}

inline bool Command::isRepeatable() const
{
    bool res = isRepeatable_raw();
    return res;
}

inline bool Command::isRepeatable(bool value)
{
    return isRepeatable_raw(value);
}

inline Ptr<SelectionEvent> Command::selectionEvent() const
{
    Ptr<SelectionEvent> res = selectionEvent_raw();
    return res;
}

inline bool Command::isExecutedWhenPreEmpted() const
{
    bool res = isExecutedWhenPreEmpted_raw();
    return res;
}

inline bool Command::isExecutedWhenPreEmpted(bool value)
{
    return isExecutedWhenPreEmpted_raw(value);
}

inline std::string Command::helpFile() const
{
    std::string res;

    char* p= helpFile_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Command::helpFile(const std::string& value)
{
    return helpFile_raw(value.c_str());
}

inline bool Command::isAutoExecute() const
{
    bool res = isAutoExecute_raw();
    return res;
}

inline bool Command::isAutoExecute(bool value)
{
    return isAutoExecute_raw(value);
}

inline bool Command::doExecute(bool terminate)
{
    bool res = doExecute_raw(terminate);
    return res;
}

inline bool Command::doExecutePreview()
{
    bool res = doExecutePreview_raw();
    return res;
}

inline bool Command::isPositionDependent() const
{
    bool res = isPositionDependent_raw();
    return res;
}

inline bool Command::isPositionDependent(bool value)
{
    return isPositionDependent_raw(value);
}

inline bool Command::setCursor(const std::string& cursorImage, int xHotSpot, int yHotSpot)
{
    bool res = setCursor_raw(cursorImage.c_str(), xHotSpot, yHotSpot);
    return res;
}

inline bool Command::getCursor(std::string& cursorImage, int& xHotSpot, int& yHotSpot)
{
    char* cursorImage_ = nullptr;

    bool res = getCursor_raw(cursorImage_, xHotSpot, yHotSpot);
    cursorImage.clear();
    if (cursorImage_)
    {
        cursorImage = cursorImage_;
        DeallocateArray(cursorImage_);
    }
    return res;
}

inline Ptr<SelectionEvent> Command::preSelect() const
{
    Ptr<SelectionEvent> res = preSelect_raw();
    return res;
}

inline Ptr<SelectionEvent> Command::preSelectMouseMove() const
{
    Ptr<SelectionEvent> res = preSelectMouseMove_raw();
    return res;
}

inline Ptr<SelectionEvent> Command::preSelectEnd() const
{
    Ptr<SelectionEvent> res = preSelectEnd_raw();
    return res;
}

inline Ptr<SelectionEvent> Command::select() const
{
    Ptr<SelectionEvent> res = select_raw();
    return res;
}

inline Ptr<SelectionEvent> Command::unselect() const
{
    Ptr<SelectionEvent> res = unselect_raw();
    return res;
}

inline bool Command::beginStep(bool makeExistingStepNonUndoable)
{
    bool res = beginStep_raw(makeExistingStepNonUndoable);
    return res;
}

inline Ptr<Base> Command::editingFeature() const
{
    Ptr<Base> res = editingFeature_raw();
    return res;
}

inline bool Command::editingFeature(const Ptr<Base>& value)
{
    return editingFeature_raw(value.get());
}

inline Ptr<HTMLEvent> Command::incomingFromHTML() const
{
    Ptr<HTMLEvent> res = incomingFromHTML_raw();
    return res;
}

inline Ptr<NavigationEvent> Command::navigatingURL() const
{
    Ptr<NavigationEvent> res = navigatingURL_raw();
    return res;
}

inline Ptr<SelectionEvent> Command::preSelectStart() const
{
    Ptr<SelectionEvent> res = preSelectStart_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMAND_API