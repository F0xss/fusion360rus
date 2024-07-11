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
# ifdef __COMPILING_ADSK_CORE_RADIALMARKINGMENU_CPP__
# define ADSK_CORE_RADIALMARKINGMENU_API XI_EXPORT
# else
# define ADSK_CORE_RADIALMARKINGMENU_API
# endif
#else
# define ADSK_CORE_RADIALMARKINGMENU_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents the marking menu which is the round menu that's displayed when the user right-clicks
/// within Fusion 360. This supports customizing the contents of the marking menu.
class RadialMarkingMenu : public Base {
public:

    /// This is used to create a sub-menu in a marking menu. This method creates a new,
    /// empty marking menu which can then be assigned to a position in the displayed
    /// marking menu to define the sub-menu.
    /// text : The text that will be displayed in the parent menu to access this menu.
    /// Returns the newly created marking menu or null in the case of a failure.
    Ptr<RadialMarkingMenu> create(const std::string& text);

    /// Gets and sets the text that is displayed in the parent marking menu to access a
    /// sub marking menu. This property is not used for the main marking menu and will
    /// return an empty string and setting it will have no effect.
    std::string text() const;
    bool text(const std::string& value);

    /// Completely clears the contents of the marking menu. If left in this state, the
    /// marking menu will not be displayed.
    /// Returns true if the clear was successful.
    bool clear();

    /// Gets and sets the command definition that's displayed in the East position (right) of
    /// the marking menu. Setting this to null indicates that the East position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> eastCommand() const;
    bool eastCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the North position (top) of the
    /// marking menu. Setting this to null indicates that the North position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> northCommand() const;
    bool northCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the Northeast position (top-right) of
    /// the marking menu. Setting this to null indicates that the Northeast position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> northeastCommand() const;
    bool northeastCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the West position (left) of
    /// the marking menu. Setting this to null indicates that the West position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> westCommand() const;
    bool westCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the Northwest position (upper-left) of
    /// the marking menu. Setting this to null indicates that the Northwest position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> northwestCommand() const;
    bool northwestCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the Southwest position (bottom-left) of
    /// the marking menu. Setting this to null indicates that the Southwest position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> southwestCommand() const;
    bool southwestCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the South position (bottom) of
    /// the marking menu. Setting this to null indicates that the South position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> southCommand() const;
    bool southCommand(const Ptr<Base>& value);

    /// Gets and sets the command definition that's displayed in the Southeast position (bottom-right) of
    /// the marking menu. Setting this to null indicates that the Southeast position should be empty.
    /// 
    /// This can also return or be set with a MarkingMenu object which is used to have a sub-menu.
    /// New marking menus can be created using the create method and then assigned
    /// to the desired position in the marking menu.
    Ptr<Base> southeastCommand() const;
    bool southeastCommand(const Ptr<Base>& value);

    ADSK_CORE_RADIALMARKINGMENU_API static const char* classType();
    ADSK_CORE_RADIALMARKINGMENU_API const char* objectType() const override;
    ADSK_CORE_RADIALMARKINGMENU_API void* queryInterface(const char* id) const override;
    ADSK_CORE_RADIALMARKINGMENU_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RadialMarkingMenu* create_raw(const char* text) = 0;
    virtual char* text_raw() const = 0;
    virtual bool text_raw(const char* value) = 0;
    virtual bool clear_raw() = 0;
    virtual Base* eastCommand_raw() const = 0;
    virtual bool eastCommand_raw(Base* value) = 0;
    virtual Base* northCommand_raw() const = 0;
    virtual bool northCommand_raw(Base* value) = 0;
    virtual Base* northeastCommand_raw() const = 0;
    virtual bool northeastCommand_raw(Base* value) = 0;
    virtual Base* westCommand_raw() const = 0;
    virtual bool westCommand_raw(Base* value) = 0;
    virtual Base* northwestCommand_raw() const = 0;
    virtual bool northwestCommand_raw(Base* value) = 0;
    virtual Base* southwestCommand_raw() const = 0;
    virtual bool southwestCommand_raw(Base* value) = 0;
    virtual Base* southCommand_raw() const = 0;
    virtual bool southCommand_raw(Base* value) = 0;
    virtual Base* southeastCommand_raw() const = 0;
    virtual bool southeastCommand_raw(Base* value) = 0;
};

// Inline wrappers

inline Ptr<RadialMarkingMenu> RadialMarkingMenu::create(const std::string& text)
{
    Ptr<RadialMarkingMenu> res = create_raw(text.c_str());
    return res;
}

inline std::string RadialMarkingMenu::text() const
{
    std::string res;

    char* p= text_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool RadialMarkingMenu::text(const std::string& value)
{
    return text_raw(value.c_str());
}

inline bool RadialMarkingMenu::clear()
{
    bool res = clear_raw();
    return res;
}

inline Ptr<Base> RadialMarkingMenu::eastCommand() const
{
    Ptr<Base> res = eastCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::eastCommand(const Ptr<Base>& value)
{
    return eastCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::northCommand() const
{
    Ptr<Base> res = northCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::northCommand(const Ptr<Base>& value)
{
    return northCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::northeastCommand() const
{
    Ptr<Base> res = northeastCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::northeastCommand(const Ptr<Base>& value)
{
    return northeastCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::westCommand() const
{
    Ptr<Base> res = westCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::westCommand(const Ptr<Base>& value)
{
    return westCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::northwestCommand() const
{
    Ptr<Base> res = northwestCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::northwestCommand(const Ptr<Base>& value)
{
    return northwestCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::southwestCommand() const
{
    Ptr<Base> res = southwestCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::southwestCommand(const Ptr<Base>& value)
{
    return southwestCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::southCommand() const
{
    Ptr<Base> res = southCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::southCommand(const Ptr<Base>& value)
{
    return southCommand_raw(value.get());
}

inline Ptr<Base> RadialMarkingMenu::southeastCommand() const
{
    Ptr<Base> res = southeastCommand_raw();
    return res;
}

inline bool RadialMarkingMenu::southeastCommand(const Ptr<Base>& value)
{
    return southeastCommand_raw(value.get());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_RADIALMARKINGMENU_API