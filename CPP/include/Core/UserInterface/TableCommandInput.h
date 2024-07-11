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
#include "CommandInput.h"
#include "../CoreTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TABLECOMMANDINPUT_CPP__
# define ADSK_CORE_TABLECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_TABLECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_TABLECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents a table within a command dialog. The table consists of
/// rows and columns where each cell can contain another command input. The
/// selection and button row command inputs cannot be used within a table.
/// In addition to the rows and columns, each table can optionally have a
/// toolbar of seperate command inputs that is shown at the bottom of the table.
/// 
/// A table command input can conceptually be compared to an Excel table where you
/// have an infinite number of rows and columns available but use a small portion.
/// As you add inputs to the table, the table will adjust so all used columns are
/// visible. The visible number of rows is controlled by you and if you create
/// more rows than can be displayed a scroll bar becomes available.
/// 
/// For an example of this command input, see the loft command which uses it to show
/// the selected profiles and rails.
class TableCommandInput : public CommandInput {
public:

    /// Returns the current number of visible columns displayed. Setting this property
    /// has no effect because the number of columns is automatically inferred by
    /// the command inputs that have been added to the table. The table automatically
    /// adjusts the number of rows displayed so all inputs can be seen.
    int numberOfColumns() const;
    bool numberOfColumns(int value);

    /// Gets and sets the width ratio of the columns. This is defined using a string
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
    std::string columnRatio() const;
    bool columnRatio(const std::string& value);

    /// Gets and sets whether a grid is displayed for the table. For a newly created
    /// table, this property defaults to false.
    bool hasGrid() const;
    bool hasGrid(bool value);

    /// Gets and sets the spacing between rows. This is defined in pixels. For a newly
    /// created table, this property defaults to 1.
    int rowSpacing() const;
    bool rowSpacing(int value);

    /// Gets and sets the spacing between columns. This is defined in pixels. For a newly
    /// created table, this property defaults to 1.
    int columnSpacing() const;
    bool columnSpacing(int value);

    /// Gets and sets the minimum number of rows displayed. This is the minimum amount of
    /// space taken up on the command dialog, even if the table doesn't yet contain any
    /// rows. For a newly created table, this property defaults to 2.
    int minimumVisibleRows() const;
    bool minimumVisibleRows(int value);

    /// Gets and sets the maximum number of rows that can be displayed. As rows are added
    /// the visible size of the table will grow to show all rows until this maximum number
    /// of rows is reached and then a scroll bar will be displayed to allow the user to
    /// access all rows. For a new created table, this property defaults to 4.
    int maximumVisibleRows() const;
    bool maximumVisibleRows(int value);

    /// Deletes the specified row. The following rows will be shifted up. The row and the
    /// command inputs it contains are deleted. To temporarily hide a row you can set the
    /// visibility of all of the command inputs it contains to be invisible. If all inputs
    /// are invisible the row will automatically be hidden.
    /// row : The row to delete where valid values are 0 to the number of rows minus 1. A value of
    /// 0 will delete the first row. A value greater than the number of rows will delete the
    /// last row.
    /// Returns true if the delete was successful.
    bool deleteRow(int row);

    /// Gets and sets the presentation style the table is currently using for its display.
    TablePresentationStyles tablePresentationStyle() const;
    bool tablePresentationStyle(TablePresentationStyles value);

    /// Adds a command input to a particular cell in the table. Rows are automatically added to the table to
    /// able to contain the command input. The command input can span multiple columns within a row and spanning
    /// across multiple rows is not currently supported.
    /// 
    /// The command input is created in the standard way but when it's added to the table using this method it
    /// will be displayed in the table instead of the main area of the dialog.
    /// input : The command input to associate to a cell. The command input is created in the standard way but when it's added to
    /// the table using this method it will be displayed in the table instead of the main area of the dialog.
    /// row : The row index of the cell where 0 is the first row.
    /// column : The column index of the cell where 0 is the first column.
    /// rowSpan : The number of additional rows that this input uses. The default value of 0 indicates that no additional
    /// rows are used. Row spanning is not currently supported so this value must always be 0.
    /// columnSpan : The number of additional columns that this input uses. The default value of 0 indicates that no additional
    /// columns are used.
    /// Returns true if the association of the command input to the cell was successful.
    bool addCommandInput(const Ptr<CommandInput>& input, int row, int column, int rowSpan = 0, int columnSpan = 0);

    /// Removes the command input that is at the specified row and column. This doesn't delete the command input from
    /// the collection of inputs associated with the command but just removes it from being displayed in the table.
    /// row : The row where the command input to be removed is located.
    /// column : The row where the command input to be removed is located.
    /// Returns true if the removal was successful.
    bool removeInput(int row, int column);

    /// Gets the position of the specified command input within the table.
    /// input : The existing command input you want to find the associated cell for.
    /// row : The returned row index of the cell.
    /// column : The returned column index of the cell.
    /// rowSpan : The returned number of additional rows used by the input. A value of 0
    /// indicates that no additional rows are used.
    /// columnSpan : The returned number of additional columns used by the input. A value of 0
    /// indicates that no additional columns are used.
    /// Returns true if the position was successfully returned.
    bool getPosition(const Ptr<CommandInput>& input, int& row, int& column, int& rowSpan, int& columnSpan);

    /// Returns the number of rows in the table. The actual number of rows in the table is defined
    /// by the number of rows that contain command inputs.
    int rowCount() const;

    /// Removes all rows in the table and the toolbar.
    /// Returns true if successful.
    bool clear();

    /// Gets and sets which row is selected in the user-interface. A value of 0 indicates
    /// that the first row is selected. A value of -1 indicates that no row is selected.
    int selectedRow() const;
    bool selectedRow(int value);

    /// Adds a new command input to the toolbar at the bottom of the table.
    /// input : Adds a command input to the toolbar at the bottom of the table. The inputs are displayed
    /// in the same order that they're added.
    /// 
    /// The command input is created in the standard way but when it's added to the table using this method it
    /// will be displayed in the table instead of the main area of the dialog.
    /// Returns true if the command input was successfully added.
    bool addToolbarCommandInput(const Ptr<CommandInput>& input);

    /// Returns the command input that is in the specified row and column. In the case
    /// where a command input spans multiple columns, the same input can be returned
    /// from multiple positions.
    /// row : The row index to return the command input from where the first row is 0.
    /// column : The row index to return the command input from where the first row is 0.
    /// Returns the command input that is in the specified row and column. If there
    /// isn't a command input in the specified location, null is returned.
    Ptr<CommandInput> getInputAtPosition(int row, int column);

    ADSK_CORE_TABLECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_TABLECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_TABLECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TABLECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int numberOfColumns_raw() const = 0;
    virtual bool numberOfColumns_raw(int value) = 0;
    virtual char* columnRatio_raw() const = 0;
    virtual bool columnRatio_raw(const char* value) = 0;
    virtual bool hasGrid_raw() const = 0;
    virtual bool hasGrid_raw(bool value) = 0;
    virtual int rowSpacing_raw() const = 0;
    virtual bool rowSpacing_raw(int value) = 0;
    virtual int columnSpacing_raw() const = 0;
    virtual bool columnSpacing_raw(int value) = 0;
    virtual int minimumVisibleRows_raw() const = 0;
    virtual bool minimumVisibleRows_raw(int value) = 0;
    virtual int maximumVisibleRows_raw() const = 0;
    virtual bool maximumVisibleRows_raw(int value) = 0;
    virtual bool deleteRow_raw(int row) = 0;
    virtual TablePresentationStyles tablePresentationStyle_raw() const = 0;
    virtual bool tablePresentationStyle_raw(TablePresentationStyles value) = 0;
    virtual bool addCommandInput_raw(CommandInput* input, int row, int column, int rowSpan, int columnSpan) = 0;
    virtual bool removeInput_raw(int row, int column) = 0;
    virtual bool getPosition_raw(CommandInput* input, int& row, int& column, int& rowSpan, int& columnSpan) = 0;
    virtual int rowCount_raw() const = 0;
    virtual bool clear_raw() = 0;
    virtual int selectedRow_raw() const = 0;
    virtual bool selectedRow_raw(int value) = 0;
    virtual bool addToolbarCommandInput_raw(CommandInput* input) = 0;
    virtual CommandInput* getInputAtPosition_raw(int row, int column) = 0;
};

// Inline wrappers

inline int TableCommandInput::numberOfColumns() const
{
    int res = numberOfColumns_raw();
    return res;
}

inline bool TableCommandInput::numberOfColumns(int value)
{
    return numberOfColumns_raw(value);
}

inline std::string TableCommandInput::columnRatio() const
{
    std::string res;

    char* p= columnRatio_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TableCommandInput::columnRatio(const std::string& value)
{
    return columnRatio_raw(value.c_str());
}

inline bool TableCommandInput::hasGrid() const
{
    bool res = hasGrid_raw();
    return res;
}

inline bool TableCommandInput::hasGrid(bool value)
{
    return hasGrid_raw(value);
}

inline int TableCommandInput::rowSpacing() const
{
    int res = rowSpacing_raw();
    return res;
}

inline bool TableCommandInput::rowSpacing(int value)
{
    return rowSpacing_raw(value);
}

inline int TableCommandInput::columnSpacing() const
{
    int res = columnSpacing_raw();
    return res;
}

inline bool TableCommandInput::columnSpacing(int value)
{
    return columnSpacing_raw(value);
}

inline int TableCommandInput::minimumVisibleRows() const
{
    int res = minimumVisibleRows_raw();
    return res;
}

inline bool TableCommandInput::minimumVisibleRows(int value)
{
    return minimumVisibleRows_raw(value);
}

inline int TableCommandInput::maximumVisibleRows() const
{
    int res = maximumVisibleRows_raw();
    return res;
}

inline bool TableCommandInput::maximumVisibleRows(int value)
{
    return maximumVisibleRows_raw(value);
}

inline bool TableCommandInput::deleteRow(int row)
{
    bool res = deleteRow_raw(row);
    return res;
}

inline TablePresentationStyles TableCommandInput::tablePresentationStyle() const
{
    TablePresentationStyles res = tablePresentationStyle_raw();
    return res;
}

inline bool TableCommandInput::tablePresentationStyle(TablePresentationStyles value)
{
    return tablePresentationStyle_raw(value);
}

inline bool TableCommandInput::addCommandInput(const Ptr<CommandInput>& input, int row, int column, int rowSpan, int columnSpan)
{
    bool res = addCommandInput_raw(input.get(), row, column, rowSpan, columnSpan);
    return res;
}

inline bool TableCommandInput::removeInput(int row, int column)
{
    bool res = removeInput_raw(row, column);
    return res;
}

inline bool TableCommandInput::getPosition(const Ptr<CommandInput>& input, int& row, int& column, int& rowSpan, int& columnSpan)
{
    bool res = getPosition_raw(input.get(), row, column, rowSpan, columnSpan);
    return res;
}

inline int TableCommandInput::rowCount() const
{
    int res = rowCount_raw();
    return res;
}

inline bool TableCommandInput::clear()
{
    bool res = clear_raw();
    return res;
}

inline int TableCommandInput::selectedRow() const
{
    int res = selectedRow_raw();
    return res;
}

inline bool TableCommandInput::selectedRow(int value)
{
    return selectedRow_raw(value);
}

inline bool TableCommandInput::addToolbarCommandInput(const Ptr<CommandInput>& input)
{
    bool res = addToolbarCommandInput_raw(input.get());
    return res;
}

inline Ptr<CommandInput> TableCommandInput::getInputAtPosition(int row, int column)
{
    Ptr<CommandInput> res = getInputAtPosition_raw(row, column);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TABLECOMMANDINPUT_API