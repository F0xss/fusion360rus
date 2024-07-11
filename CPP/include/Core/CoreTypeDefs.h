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

namespace adsk { namespace core {

/// The different types of sources for an appearance.
enum AppearanceSourceTypes
{
    /// Then entity is its current appearance because of the appearance associated with the material assigned to a component or body.
    MaterialAppearanceSource,
    /// The entity is its current appearance because of an appearance assigned to the body.
    BodyAppearanceSource,
    /// The entity is its current appearance because of an appearance assigned to the occurrence.
    OccurrenceAppearanceSource,
    /// The entity is its current appearance because of an appearance assigned to the face.
    FaceAppearanceSource,
    /// The entity is its current appearance because of an override that's been applied.
    OverrideAppearanceSource
};

/// The different types of cameras.
enum CameraTypes
{
    /// An orthographic camera. Things are the same size in the view regardless of there distance from the eye.
    OrthographicCameraType,
    /// An perspective camera. Things are smaller the further they are away from the eye.
    PerspectiveCameraType,
    /// An perspective camera. Things are smaller the further they are away from the eye.
    PerspectiveWithOrthoFacesCameraType
};

/// List of possible errors when closing a document.
enum CloseError
{
    /// The close operation was canceled by the user
    CloseCancelledError = 200
};

/// Defines the termination reason for a command.
/// Commands can be terminated for a number of different reasons, and
/// based on the reason commands have to do different things during
/// termination so this enum defines various reasons for termination
enum CommandTerminationReason
{
    /// The command is terminated out of the reasons list below.
    UnknownTerminationReason,
    /// The command is terminated by clicking OK button, and executed successfully.
    CompletedTerminationReason,
    /// The command is terminated by clicking Cancel button.
    CancelledTerminationReason,
    /// The command is terminated by clicking OK button, and executed failed.
    AbortedTerminationReason,
    /// The command is terminated by activating another command.
    PreEmptedTerminationReason,
    /// The command is terminated by closing the document.
    SessionEndingTerminationReason
};

/// The different types of 2D curves.
enum Curve2DTypes
{
    /// Transient 2D line segment.
    Line2DCurveType,
    /// Transient 2D arc.
    Arc2DCurveType,
    /// Transient 2D circle.
    Circle2DCurveType,
    /// Transient 2D ellipse.
    Ellipse2DCurveType,
    /// Transient 2D elliptical arc.
    EllipticalArc2DCurveType,
    /// Transient 2D infinite line.
    InfiniteLine2DCurveType,
    /// Transient 2D NURBS curve.
    NurbsCurve2DCurveType
};

/// The different types of 3D curves.
enum Curve3DTypes
{
    /// Transient 3D line segment.
    Line3DCurveType,
    /// Transient 3D arc.
    Arc3DCurveType,
    /// Transient 3D circle.
    Circle3DCurveType,
    /// Transient 3D ellipse.
    Ellipse3DCurveType,
    /// Transient 3D elliptical arc.
    EllipticalArc3DCurveType,
    /// Transient 3D infinite line.
    InfiniteLine3DCurveType,
    /// Transient 3D NURBS curve.
    NurbsCurve3DCurveType
};

/// A list of the valid modeling orientations.
enum DefaultModelingOrientations
{
    /// The model Y is the up direction.
    YUpModelingOrientation,
    /// The model Z is the up direction.
    ZUpModelingOrientation
};

/// A list of the valid orbit modes.
enum DefaultOrbits
{
    /// Constrained orbit mode.
    ConstrainedOrbit,
    /// Free orbit mode.
    FreeOrbit
};

/// A list of the valid degraded display styles.
enum DegradedSelectionDisplayStyles
{
    /// Normal with glow degraded selection style.
    NormalWithGlowDegradedSelectionStyle,
    /// Simple without glow degraded selection style.
    SimpleWithoutGlowDegradedSelectionStyle
};

/// List of the valid degree display formats.
enum DegreeDisplayFormats
{
    /// Decimal degree display.
    DecimalDegreeDisplay,
    /// Minutes and seconds degree display.
    MinutesAndSecondsDegreeDisplay
};

/// Defines the valid return types from a dialog.
enum DialogResults
{
    /// An unexpected error occurred.
    DialogError = -1,
    /// The dialog box return value is OK (usually sent from a button labeled OK).
    DialogOK,
    /// The dialog box return value is Cancel (usually sent from a button labeled Cancel).
    DialogCancel,
    /// The dialog box return value is Yes (usually sent from a buttons labeled Yes and Retry).
    DialogYes,
    /// The dialog box return value is No (usually sent from a button labeled No).
    DialogNo
};

/// The types of documents that can be created.
enum DocumentTypes
{
    /// Fusion 360 design document type.
    FusionDesignDocumentType
};

/// Defines the different styles that a drop-down input can be.
enum DropDownStyles
{
    /// Defines a drop-down where it contains a list items where each item has text and an icon.
    /// If the icon of the list item is set to null, a radio button will be displayed instead of
    /// the icon. A single item can be selected at a time.
    LabeledIconDropDownStyle,
    /// Defines a drop-down that contains a scrollable list of text only items and one item can
    /// be selected from the list.
    TextListDropDownStyle,
    /// Defines a drop-down that contains a list of check boxes where multiple items can be checked.
    CheckBoxDropDownStyle
};

/// List of the valid foot and inch formats.
enum FootAndInchDisplayFormats
{
    /// Decimal foot and inch display format.
    DecimalFootAndInchDisplay,
    /// Fractional foot and inch display format.
    FractionalFootAndInchDisplay,
    /// Architectural foot and inch display format.
    ArchitecturalFootAndInchDisplay
};

/// Errors that every API call can return via Application::GetLastError.
/// These can be augmented with class and function specific errors.
enum GenericErrors
{
    /// No error occurred.
    Ok = 0,
    /// An internal error occurred - e.g. a library function throw an exception.
    UnexpectedError,
    /// Internal API validation failed
    InternalValidationError,
    /// The client made some sort of mistake calling the API object
    BadApiCallError,
    /// The API object is referencing a Neutron object that has been deleted.
    UnderlyingObjectDeletedError,
    /// The API operation failed with the supplied error message.
    OperationFailed,
    /// e.g. Errors related to bad value expressions or units - e.g. "1 in + 1 Kg" is an invalid expression
    ExpressionError,
    /// When creating or changing an object via reference geometry, the geometry wasn't specified correctly (e.g. an Occurrence needs to be specified).
    InvalidGeometryError,
    /// Errors reserved for several functions in a class.
    ClassSpecificError = 100,
    /// Errors reserved for a specific function in a class.
    FunctionSpecificError = 200
};

/// A list of the valid graphics drivers.
enum GraphicsDrivers
{
    /// DirectX 9 Graphics Driver.
    /// This option only applies to Windows.
    DirectX9GraphicsDriver,
    /// DirectX 11 Graphics Driver.
    /// This option only applies to Windows.
    DirectX11GraphicsDriver,
    /// Let Fusion 360 automatically select the Graphics Driver.
    /// This option applies to both Windows and Mac.
    AutoSelectGraphicsDriver,
    /// OpenGL Core Profile Graphics Driver.
    /// This option only applies to Mac.
    OpenGLCoreProfileGraphicsDriver,
    /// OpenGL Graphics Driver.
    /// This option only applies to Mac.
    OpenGLGraphicsDriver
};

/// Defines the different horizontal alignments that can be applied to text.
enum HorizontalAlignments
{
    /// Aligned to the left.
    LeftHorizontalAlignment,
    /// Aligned along the center.
    CenterHorizontalAlignment,
    /// Aligned to the right.
    RightHorizontalAlignment
};

/// The different types of hubs.
enum HubTypes
{
    /// A personal hub.
    PersonalHubType,
    /// An A360 team hub.
    TeamHubType
};

/// Keyboard modifier values.
enum KeyboardModifiers
{
    /// None
    NoKeyboardModifier = 0x00000000,
    /// Shift
    ShiftKeyboardModifier = 0x02000000,
    /// Control
    CtrlKeyboardModifier = 0x04000000,
    /// Alt
    AltKeyboardModifier = 0x08000000,
    /// Meta
    MetaKeyboardModifier = 0x10000000
};

/// Key values on the keyboard.
enum KeyCodes
{
    /// No key
    NoKeyCode = 0x0,
    /// Space
    SpaceKeyCode = 0x20,
    /// Asterisk
    AsteriskKeyCode = 0x2a,
    /// Plus
    PlusKeyCode = 0x2b,
    /// Comma
    CommaKeyCode = 0x2C,
    /// Minus
    MinusKeyCode = 0x2d,
    /// Period
    PeriodKeyCode = 0x2E,
    /// Slash
    SlashKeyCode = 0x2f,
    /// D0
    D0KeyCode = 0x30,
    /// D1
    D1KeyCode = 0x31,
    /// D2
    D2KeyCode = 0x32,
    /// D3
    D3KeyCode = 0x33,
    /// D4
    D4KeyCode = 0x34,
    /// D5
    D5KeyCode = 0x35,
    /// D6
    D6KeyCode = 0x36,
    /// D7
    D7KeyCode = 0x37,
    /// D8
    D8KeyCode = 0x38,
    /// D9
    D9KeyCode = 0x39,
    /// Colon
    ColonKeyCode = 0x3a,
    /// Semicolon
    SemicolonKeyCode = 0x3b,
    /// Less
    LessKeyCode = 0x3c,
    /// Equal
    EqualKeyCode = 0x3d,
    /// Greater
    GreaterKeyCode = 0x3e,
    /// Question
    QuestionKeyCode = 0x3f,
    /// A
    AKeyCode = 0x41,
    /// B
    BKeyCode = 0x42,
    /// C
    CKeyCode = 0x43,
    /// D
    DKeyCode = 0x44,
    /// E
    EKeyCode = 0x45,
    /// F
    FKeyCode = 0x46,
    /// G
    GKeyCode = 0x47,
    /// H
    HKeyCode = 0x48,
    /// I
    IKeyCode = 0x49,
    /// J
    JKeyCode = 0x4A,
    /// K
    KKeyCode = 0x4B,
    /// L
    LKeyCode = 0x4C,
    /// M
    MKeyCode = 0x4D,
    /// N
    NKeyCode = 0x4E,
    /// O
    OKeyCode = 0x4F,
    /// P
    PKeyCode = 0x50,
    /// Q
    QKeyCode = 0x51,
    /// R
    RKeyCode = 0x52,
    /// S
    SKeyCode = 0x53,
    /// T
    TKeyCode = 0x54,
    /// U
    UKeyCode = 0x55,
    /// V
    VKeyCode = 0x56,
    /// W
    WKeyCode = 0x57,
    /// X
    XKeyCode = 0x58,
    /// Y
    YKeyCode = 0x59,
    /// Z
    ZKeyCode = 0x5A,
    /// Bracket left
    BracketLeftKeyCode = 0x5b,
    /// Backslash
    BackslashKeyCode = 0x5c,
    /// Bracket right
    BracketRightKeyCode = 0x5d,
    /// Ascii circum
    AsciiCircumKeyCode = 0x5e,
    /// Underscore
    UnderscoreKeyCode = 0x5f,
    /// Quote left
    QuoteLeftKeyCode = 0x60,
    /// Brace left
    BraceLeftKeyCode = 0x7b,
    /// Bar
    BarKeyCode = 0x7c,
    /// Brace right
    BraceRightKeyCode = 0x7d,
    /// Ascii tilde
    AsciiTildeKeyCode = 0x7e,
    /// Grave accent
    GraveAccentKeyCode = 0x60,
    /// Escape
    EscapeKeyCode = 0x01000000,
    /// Tab
    TabKeyCode = 0x01000001,
    /// Backtab
    BacktabKeyCode = 0x01000002,
    /// Backspace
    BackspaceKeyCode = 0x01000003,
    /// Return
    ReturnKeyCode = 0x01000004,
    /// Enter
    EnterKeyCode = 0x01000005,
    /// Insert
    InsertKeyCode = 0x01000006,
    /// Delete
    DeleteKeyCode = 0x01000007,
    /// Pause
    PauseKeyCode = 0x01000008,
    /// Print
    PrintKeyCode = 0x01000009,
    /// SysReq
    SysReqKeyCode = 0x0100000a,
    /// Clear
    ClearKeyCode = 0x0100000b,
    /// Home
    HomeKeyCode = 0x01000010,
    /// End
    EndKeyCode = 0x01000011,
    /// Left
    LeftKeyCode = 0x01000012,
    /// Up
    UpKeyCode = 0x01000013,
    /// Right
    RightKeyCode = 0x01000014,
    /// Down
    DownKeyCode = 0x01000015,
    /// Page up
    PageUpKeyCode = 0x01000016,
    /// Page down
    PageDownKeyCode = 0x01000017,
    /// Shift
    ShiftKeyCode = 0x01000020,
    /// Control
    ControlKeyCode = 0x01000021,
    /// Meta
    MetaKeyCode = 0x01000022,
    /// Alt
    AltKeyCode = 0x01000023,
    /// F1
    F1KeyCode = 0x01000030,
    /// F2
    F2KeyCode = 0x01000031,
    /// F3
    F3KeyCode = 0x01000032,
    /// F4
    F4KeyCode = 0x01000033,
    /// F5
    F5KeyCode = 0x01000034,
    /// F6
    F6KeyCode = 0x01000035,
    /// F7
    F7KeyCode = 0x01000036,
    /// F8
    F8KeyCode = 0x01000037,
    /// F9
    F9KeyCode = 0x01000038,
    /// F10
    F10KeyCode = 0x01000039,
    /// F11
    F11KeyCode = 0x0100003a,
    /// F12
    F12KeyCode = 0x0100003b,
    /// Menu
    MenuKeyCode = 0x01000055
};

/// The different types of items that can be displayed in a list control.
enum ListControlDisplayTypes
{
    /// The list control contains check boxes.
    CheckBoxListType,
    /// The list controls contains radio buttons.
    RadioButtonlistType,
    /// The list control is a list of text items with optional icons.
    StandardListType
};

/// Log message level
enum LogLevels
{
    /// Use this type to log error message.
    ErrorLogLevel = 0,
    /// Use this type to log warning message.
    WarningLogLevel,
    /// Use this type to log info message.
    InfoLogLevel
};

/// Location where messages should be logged.
enum LogTypes
{
    /// Log information to the Fusion app log file.
    FileLogType = 0,
    /// Log information to Fusion text command window. This logs only the
    /// provided message string.
    ConsoleLogType
};

/// List of the different types of material related units supported for displaying values.
enum MaterialDisplayUnits
{
    /// Metric standard
    MetricStandardDisplayUnits,
    /// Metric mks
    MetricMKSDisplayUnits,
    /// Metric mmNs
    MetricMMNSDisplayUnits,
    /// Metric cgs
    MetricCGSDisplayUnits,
    /// Metric umNsd
    MetricUMNSDisplayUnits,
    /// English standard
    EnglishStandardDisplayUnits,
    /// English in
    EnglishInchDisplayUnits,
    /// English ft
    EnglishFootDisplayUnits
};

/// Defines the valid return types from a message box.
enum MessageBoxButtonTypes
{
    /// The message box contains an OK button.
    OKButtonType,
    /// The message box contains OK and Cancel buttons.
    OKCancelButtonType,
    /// The message box contains Retry and Cancel buttons.
    RetryCancelButtonType,
    /// The message box contains Yes and No buttons.
    YesNoButtonType,
    /// The message box contains Yes, No, and Cancel buttons.
    YesNoCancelButtonType
};

/// Defines the different icons that can be used in a message box.
enum MessageBoxIconTypes
{
    /// No icon is to be used.
    NoIconIconType,
    /// An icon indicating that a question is being asked.
    QuestionIconType,
    /// An icon indicating that informational message is being displayed.
    InformationIconType,
    /// An icon indicating that a warning message is being displayed.
    WarningIconType,
    /// An icon indicating that a critical problem message is being displayed.
    CriticalIconType
};

/// Mouse button values.
enum MouseButtons
{
    /// None
    NoMouseButton = 0x0,
    /// Left
    LeftMouseButton = 0x1,
    /// Right
    RightMouseButton = 0x2,
    /// Middle
    MiddleMouseButton = 0x4
};

/// A list of the valid network proxy settings.
enum NetworkProxySettings
{
    /// Automatic proxy setting.
    AutomaticProxySettings,
    /// No proxy setting.
    NoProxyProxySettings,
    /// Windows default proxy setting.
    WindowsDefaultProxySettings,
    /// Override proxy setting.
    OverrideProxySettings
};

/// The different surface property types.
enum NurbsSurfaceProperties
{
    /// Open
    OpenNurbsSurface = 0x01,
    /// Closed
    ClosedNurbsSurface = 0x02,
    /// Periodic
    PeriodicNurbsSurface = 0x04,
    /// Rational
    RationalNurbsSurface = 0x08
};

/// The possible errors when a document is opened.
enum OpenDocumentError
{
    /// Error indicating the specified file does not exist.
    DocumentNotFoundError = 200
};

/// Defines the different options available when docking a palette to the Fusion 360 main window area.
enum PaletteDockingOptions
{
    /// Specifies the palette cannot be docked to the Fusion 360 main window area.
    PaletteDockOptionsNone,
    /// Specifies that the palette can only be docked to the sides of the Fusion 360 main window area.
    PaletteDockOptionsToVerticalOnly,
    /// Specifies that the palette can only be docked to the top and bottom of the Fusion 360 main window area.
    PaletteDockOptionsToHorizontalOnly,
    /// Specifies that the palette can be docked to the sides, top, or bottom of the Fusion 360 main window area.
    PaletteDockOptionsToVerticalAndHorizontal
};

/// Defines the various docking states that a palette can be in.
enum PaletteDockingStates
{
    /// The palette is not docked but is floating.
    PaletteDockStateFloating,
    /// The palette is docked to the top of the main window area.
    PaletteDockStateTop,
    /// The palette is docked to the bottom of the main window area.
    PaletteDockStateBottom,
    /// The palette is docked to the left of the main window area.
    PaletteDockStateLeft,
    /// The palette is docked to the right of the main window area.
    PaletteDockStateRight
};

/// Defines the various positions that a palette can be snapped to another palette.
enum PaletteSnapOptions
{
    /// Specifies the palette is snapped to the top of another palette.
    PaletteSnapOptionsTop,
    /// Specifies the palette is snapped to the left of another palette.
    PaletteSnapOptionsLeft,
    /// Specifies the palette is snapped to the right of another palette.
    PaletteSnapOptionsRight,
    /// Specifies the palette is snapped to the bottom of another palette.
    PaletteSnapOptionsBottom
};

/// A list of the different predefined keyboard shortcuts for pan, zoom, and orbit.
enum PanZoomOrbitShortcuts
{
    /// Use Fusion 360 pan, zoom, and orbit keyboard shortcuts.
    Fusion360PanZoomOrbitShortcut,
    /// Use Alias pan, zoom, and orbit keyboard shortcuts.
    AliasPanZoomOrbitShortcut,
    /// Use Inventor pan, zoom, and orbit keyboard shortcuts.
    InventorPanZoomOrbitShortcut,
    /// Use SolidWorks pan, zoom, and orbit keyboard shortcuts.
    SolidWorksPanZoomOrbitShortcut,
    /// Use Tinkercad pan, zoom, and orbit keyboard shortcuts.
    TinkercadPanZoomOrbitShortcut,
    /// Use PowerMill pan, zoom, and orbit keyboard shortcuts.
    PowerMillPanZoomOrbitShortcut
};

/// The different types of projected texture maps.
enum ProjectedTextureMapTypes
{
    /// The default projection that is determined automatically.
    AutomaticTextureMapProjection,
    /// A texture map that is projected onto the body along a single direction.
    PlanarTextureMapProjection,
    /// A texture map that is projected from six orthogonal planes as if the body was in a
    /// box and each plane of the box is projected onto the body.
    BoxTextureMapProjection,
    /// A texture map that is projected as a sphere onto the body.
    SphericalTextureMapProjection,
    /// A texture map that is projected as a cylinder onto the body.
    CylindricalTextureMapProjection
};

/// List of possible errors when saving a document locally.
enum SaveLocalErrors
{
    /// The save was canceled.
    SaveCancelledSaveLocalError = 200,
    /// The disk is full.
    DiskFullSaveLocalError,
    /// The specified file exists and is read-only.
    FileReadOnlySaveLocalError
};

/// A list of the valid selection display styles.
enum SelectionDisplayStyles
{
    /// Normal selection display.
    NormalDisplayStyle,
    /// Simple selection display.
    SimpleDisplayStyle
};

/// The different types of status messages that can be used with the StatusCode object.
enum StatusMessageTypes
{
    /// No error or warning is associated with the status code.
    StatusMessageNoneType,
    /// An error that prevents the operation from succeeding.
    StatusMessageErrorType,
    /// A warning that the operation has succeeded but without expected results.
    StatusMessageWarningType
};

/// The different types of surfaces.
enum SurfaceTypes
{
    /// A planar surface.
    PlaneSurfaceType,
    /// A cylindrical surface.
    CylinderSurfaceType,
    /// A cone surface.
    ConeSurfaceType,
    /// A spherical surface.
    SphereSurfaceType,
    /// A torus surface.
    TorusSurfaceType,
    /// An elliptical cylinder surface.
    EllipticalCylinderSurfaceType,
    /// An elliptical cone surface.
    EllipticalConeSurfaceType,
    /// A NURBS surface.
    NurbsSurfaceType
};

/// The different styles that a TableCommandInput can use for its display.
enum TablePresentationStyles
{
    /// ???
    nameValueTablePresentationStyle,
    /// ???
    itemBorderTablePresentationStyle,
    /// ???
    transparentBackgroundTablePresentationStyle
};

/// The different types of textures.
enum TextureTypes
{
    /// Unknown texture type.
    UnknownTexture,
    /// A texture defined by an image.
    ImageTexture,
    /// A procedural checkered texture.
    CheckerTexture,
    /// A procedural gradient texture.
    GradientTexture,
    /// A procedural marble texture.
    MarbleTexture,
    /// A procedural noise texture.
    NoiseTexture,
    /// A procedural speckle texture.
    SpeckleTexture,
    /// A procedural tile texture.
    TileTexture,
    /// A procedural wave texture.
    WaveTexture,
    /// A procedural wood texture.
    WoodTexture
};

/// A list of the valid transparency display effects.
enum TransparencyDisplayEffects
{
    /// Better performance transparency effect.
    BetterPerformanceTransparencyEffect,
    /// Better display transparency effect.
    BetterDisplayTransparencyEffect
};

/// Defines the different types of edits that can be applied by the user to a triad command input.
enum TriadChanges
{
    /// Defines an unknown change.
    TriadChangeUnknown,
    /// Defines a translation in the X direction of the triad.
    TriadChangeXTranslation,
    /// Defines a translation in the Y direction of the triad.
    TriadChangeYTranslation,
    /// Defines a translation in the Z direction of the triad.
    TriadChangeZTranslation,
    /// Defines a translation on the X-Y plane of the triad.
    TriadChangeXYTranslation,
    /// Defines a translation on the Y-Z plane of the triad.
    TriadChangeYZTranslation,
    /// Defines a translation on the X-Z plane of the triad.
    TriadChangeXZTranslation,
    /// Defines a translation in the X, Y, and Z directions of the triad.
    TriadChangeXYZTranslation,
    /// Defines a rotation around the X axis of the triad.
    TriadChangeXRotation,
    /// Defines a rotation around the Y axis of the triad.
    TriadChangeYRotation,
    /// Defines a rotation around the Z axis of the triad.
    TriadChangeZRotation,
    /// Defines a change in scale along the X axis of the triad.
    TriadChangeXScale,
    /// Defines a change in scale along the Y axis of the triad.
    TriadChangeYScale,
    /// Defines a change in scale along the Z axis of the triad.
    TriadChangeZScale,
    /// Defines a uniform change in scale along the X and Y axes of the triad.
    TriadChangeXYScale,
    /// Defines a uniform change in scale along the Y and Z axes of the triad.
    TriadChangeYZScale,
    /// Defines a uniform change in scale along the X and Z axes of the triad.
    TriadChangeXZScale,
    /// Defines a uniform change in scale along the X, Y, and Z axes of the triad.
    TriadChangeXYZScale,
    /// Defines a horizontal (around the around the Y-Z plane) flip of the triad.
    TriadChangeHorizontalFlip,
    /// Defines a vertical (around the around the X-Z plane) flip of the triad.
    TriadChangeVerticalFlip
};

/// The different states of a file upload process.
enum UploadStates
{
    /// The upload is still processing.
    UploadProcessing,
    /// The upload has completed.
    UploadFinished,
    /// The upload has failed.
    UploadFailed
};

/// A list of the valid languages.
enum UserLanguages
{
    /// Peoples Republic of China Chinese
    ChinesePRCLanguage,
    /// Taiwan Chinese
    ChineseTaiwanLanguage,
    /// Czech
    CzechLanguage,
    /// English
    EnglishLanguage,
    /// French
    FrenchLanguage,
    /// German
    GermanLanguage,
    /// Hungarian
    HungarianLanguage,
    /// Italian
    ItalianLanguage,
    /// Japanese
    JapaneseLanguage,
    /// Korean
    KoreanLanguage,
    /// Polish
    PolishLanguage,
    /// Brazilian Portuguese
    PortugueseBrazilianLanguage,
    /// Russian
    RussianLanguage,
    /// Spanish
    SpanishLanguage,
    /// Turkish
    TurkishLanguage
};

/// Errors that can occur when using the ValueInput object.
enum ValueInputError
{
    /// Returned when the RealValue or StringValue properties of the ValueInput are called
    /// and there is no data to return of that type.
    ValueNotOfTypeError = 100
};

/// The different types of values that a ValueInput can be.
enum ValueTypes
{
    /// Indicates the ValueInput is a string value.
    StringValueType,
    /// Indicates the ValueInput is a real value.
    RealValueType,
    /// Indicates the ValueInput is a reference to an object.
    ObjectValueType,
    /// Indicates the ValueInput is a boolean value.
    BooleanValueType
};

/// Error values for various vector operations.
enum VectorError
{
    /// Zero length vector is not allowed. Various vector ops - e.g. IsParallel - don't work with zero length vectors
    ZeroLengthVectorError = 100
};

/// Defines the different vertical alignments that can be applied to text.
enum VerticalAlignments
{
    /// Aligned to the top.
    TopVerticalAlignment,
    /// Aligned along the middle.
    MiddleVerticalAlignment,
    /// Aligned to the bottom.
    BottomVerticalAlignment
};

/// Common view orientations.
enum ViewOrientations
{
    /// The view is oriented in an orientation other than one of the predefined orientations.
    ArbitraryViewOrientation,
    /// The view is oriented to see the back of the model.
    BackViewOrientation,
    /// The view is oriented to see the bottom of the model.
    BottomViewOrientation,
    /// The view is oriented to see the front of the model.
    FrontViewOrientation,
    /// The view is oriented to see the bottom left corner of the model.
    IsoBottomLeftViewOrientation,
    /// The view is oriented to see the bottom right corner of the model.
    IsoBottomRightViewOrientation,
    /// The view is oriented to see the top left corner of the model.
    IsoTopLeftViewOrientation,
    /// The view is oriented to see the top right corner of the model.
    IsoTopRightViewOrientation,
    /// The view is oriented to see the left of the model.
    LeftViewOrientation,
    /// The view is oriented to see the right of the model.
    RightViewOrientation,
    /// The view is oriented to see the top of the model.
    TopViewOrientation
};

/// A list of the support visual styles that Fusion 360 uses when rendering the model.
enum VisualStyles
{
    /// Shaded display style.
    ShadedVisualStyle,
    /// Shaded with hidden edges displayed.
    ShadedWithHiddenEdgesVisualStyle,
    /// Shaded with only the visible edges displayed.
    ShadedWithVisibleEdgesOnlyVisualStyle,
    /// Wireframe display style.
    WireframeVisualStyle,
    /// Wireframe with hidden edges displayed.
    WireframeWithHiddenEdgesVisualStyle,
    /// Wireframe with only the visible edges displayed.
    WireframeWithVisibleEdgesOnlyVisualStyle
};

}// namespace core
}// namespace adsk
