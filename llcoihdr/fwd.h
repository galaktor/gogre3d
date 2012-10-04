#pragma once

/********* DEFINES **********/
#define EVENT_FRAME_STARTED 1
#define EVENT_FRAME_RENDERING_QUEUED 2
#define EVENT_FRAME_ENDED 4


/******* SIMPLE TYPES *******/
typedef float coiReal;
// From OgrePlatform.h
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef int int32;
typedef short int16;
typedef char int8;
// OgreColourValue.h
typedef uint32 RGBA;
typedef uint32 ARGB;
typedef uint32 ABGR;
typedef uint32 BGRA;
// OgreSceneManager.h
typedef uint16 SceneTypeMask;


/********* HANDLES **********/
typedef void* AxisAlignedBoxHandle;
typedef void* BoneHandle;
//typedef vector<ushort>::type BoneHandleMap;
typedef void* BorderPanelOverlayElementFactoryHandle;
typedef void* CameraHandle;
typedef void* coiResourceHandle;
typedef void* EntityHandle;
typedef void* FrameListenerHandle;
typedef void* IndexDataHandle;
typedef void* InputManagerHandle;
typedef void* KeyboardInputHandle;
typedef void* LightHandle;
typedef void (*loadingCompleteCB)(coiResourceHandle handle, void* userdata);
typedef void*  LogHandle;
typedef void* LogListenerHandle;
typedef void* LogManagerHandle;
typedef void* ManualObjectHandle;
typedef void* ManualObjectSectionHandle;
typedef void* ManualResourceLoaderHandle;
typedef void* MaterialHandle;
typedef void* MaterialManagerHandle;
typedef void* MaterialPtrHandle;
typedef void* MeshHandle;
typedef void* MeshPtrHandle;
typedef void* MouseInputHandle;
typedef void* MouseListenerHandle;
typedef void* MovableObjectHandle;
typedef void* NameValuePairListHandle;
typedef void* NodeHandle;
typedef void* OverlayContainerHandle;
typedef void* OverlayElementFactoryHandle;
typedef void* OverlayElementHandle;
typedef void* OverlayHandle;
typedef void* OverlayManagerHandle;
typedef void* PanelOverlayElementFactoryHandle;
typedef void* PanelOverlayElementHandle;
typedef void* ParamListHandle;
typedef void* PassHandle;
typedef void* PlaneBoundedVolumeHandle;
typedef void* PlaneHandle;
typedef void* PlaneListHandle;
typedef void (*preparingCompleteCB)(coiResourceHandle handle, void* userdata);
typedef void* RayHandle;
typedef void* RaySceneQueryHandle;
typedef void* RaySceneQueryListenerHandle;
typedef void* RaySceneQueryResultHandle;
typedef void* RenderableHandle;
typedef void* RenderOperationHandle;
typedef void* RenderSystemHandle;
typedef void* RenderSystemListHandle;
typedef void* RenderWindowHandle;
typedef unsigned long long int ResourceHandle;
typedef void* ResourceGroupManagerHandle;
typedef void* ResourceListenerHandle;
typedef void* ResourceManagerHandle;
typedef void* ResourcePtrHandle;
typedef void* RootHandle;
typedef void* SceneManagerHandle;
typedef void* SceneNodeHandle;
typedef void* SceneQueryHandle;
typedef void* SceneQueryListenerHandle;
typedef void* SceneQueryResultHandle;
typedef void* SkeletonHandle;
typedef void* SkeletonInstanceHandle;
typedef void* SphereHandle;
typedef void* TagPointHandle;
typedef void* TechniqueHandle;
typedef void* TextureManagerHandle;
typedef void* TextAreaOverlayElementFactoryHandle;
typedef void* TextAreaOverlayElementHandle;
typedef void* TimerHandle;
typedef void (*unloadingCompleteCB)(coiResourceHandle handle, void* userdata);
typedef void* VertexDataHandle;
typedef void* ViewportHandle;
typedef void(*WindowListenerEvent)(RenderWindowHandle);
typedef void* WindowListenerHandle;

/********** OTHER ***********/
typedef struct
{
    coiReal w;
    coiReal x;
    coiReal y;
    coiReal z;
} coiQuaternion;

typedef struct
{
    coiReal x;
    coiReal y;
} coiVector2;

typedef struct
{
    coiReal x;
    coiReal y;
    coiReal z;
} coiVector3;

typedef struct
{
    coiReal x;
    coiReal y;
    coiReal z;
    coiReal w;
} coiVector4;

typedef struct
{
    coiReal m[3][3];
} coiMatrix3;

typedef struct
{
    coiReal m[4][4];
} coiMatrix4;

typedef struct
{
    coiVector3 position;
    coiQuaternion orientation;
} ViewPoint;


typedef struct
{
    float r;
    float g;
    float b;
    float a;
} coiColourValue;


typedef struct
{
    float lastFPS;
    float avgFPS;
    float bestFPS;
    float worstFPS;
    unsigned long bestFrameTime;
    unsigned long worstFrameTime;
    size_t triangleCount;
    size_t batchCount;
} FrameStats;


typedef struct
{
    unsigned short target_buffer_index;
    coiReal parametric;
} hardware_animation_data;

// Start enums
// OgreBlendMode.h

typedef enum
{
    SBT_TRANSPARENT_ALPHA,
    SBT_TRANSPARENT_COLOUR,
    SBT_ADD,
    SBT_MODULATE,
    SBT_REPLACE
} scene_blend_type;

typedef enum
{
    SBF_ONE,
    SBF_ZERO,
    SBF_DEST_COLOUR,
    SBF_SOURCE_COLOUR,
    SBF_ONE_MINUS_DEST_COLOUR,
    SBF_ONE_MINUS_SOURCE_COLOUR,
    SBF_DEST_ALPHA,
    SBF_SOURCE_ALPHA,
    SBF_ONE_MINUS_DEST_ALPHA,
    SBF_ONE_MINUS_SOURCE_ALPHA
} scene_blend_factor;

typedef enum
{
    SBO_ADD,
    SBO_SUBTRACT,
    SBO_REVERSE_SUBTRACT,
    SBO_MIN,
    SBO_MAX
} scene_blend_operation;

typedef enum
{
    LBT_COLOUR,
    LBT_ALPHA
} layer_blend_type;

typedef enum
{
    LBO_REPLACE,
    LBO_ADD,
    LBO_MODULATE,
    LBO_ALPHA_BLEND
} layer_blend_operation;

typedef enum
{
    LBX_SOURCE1,
    LBX_SOURCE2,
    LBX_MODULATE,
    LBX_MODULATE_X2,
    LBX_MODULATE_X4,
    LBX_ADD,
    LBX_ADD_SIGNED,
    LBX_ADD_SMOOTH,
    LBX_SUBTRACT,
    LBX_BLEND_DIFFUSE_ALPHA,
    LBX_BLEND_TEXTURE_ALPHA,
    LBX_BLEND_CURRENT_ALPHA,
    LBX_BLEND_MANUAL,
    LBX_DOTPRODUCT,
    LBX_BLEND_DIFFUSE_COLOUR
} layer_blend_operation_ex;

typedef enum
{
    LBS_CURRENT,
    LBS_TEXTURE,
    LBS_DIFFUSE,
    LBS_SPECULAR,
    LBS_MANUAL
} layer_blend_source;


// OgreRenderTarget.h
typedef enum
{
    SF_NONE           = 0,
    SF_FPS            = 1,
    SF_AVG_FPS        = 2,
    SF_BEST_FPS       = 4,
    SF_WORST_FPS      = 8,
    SF_TRIANGLE_COUNT = 16,
    SF_ALL            = 0xFFFF
} stat_flags;

typedef enum
{
    FB_FRONT,
    FB_BACK,
    FB_AUTO
} frame_buffer;

// OgreHardwareBuffer.h
typedef enum 
{
    HBU_STATIC = 1,
    HBU_DYNAMIC = 2,
    HBU_WRITE_ONLY = 4,
    HBU_DISCARDABLE = 8,
    HBU_STATIC_WRITE_ONLY = 5, 
    HBU_DYNAMIC_WRITE_ONLY = 6,
    HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE = 14
} hardware_buffer_usage;

//OgreLight.h
typedef enum
{
    LT_POINT = 0,
    LT_DIRECTIONAL = 1,
    LT_SPOTLIGHT = 2
} light_types;

//OgreNode.h
typedef enum
{
    TS_LOCAL,
    TS_PARENT,
    TS_WORLD
} transform_space;

// OgrePlane.h
typedef enum
{
    NO_SIDE,
    POSITIVE_SIDE,
    NEGATIVE_SIDE,
    BOTH_SIDE
} plane_side;


//OgreAxisAlignedBox.h
typedef enum
{
    EXTENT_NULL,
    EXTENT_FINITE,
    EXTENT_INFINITE
} Extent;

typedef enum {
    FAR_LEFT_BOTTOM = 0,
    FAR_LEFT_TOP = 1,
    FAR_RIGHT_TOP = 2,
    FAR_RIGHT_BOTTOM = 3,
    NEAR_RIGHT_BOTTOM = 7,
    NEAR_LEFT_BOTTOM = 6,
    NEAR_LEFT_TOP = 5,
    NEAR_RIGHT_TOP = 4
} CornerEnum;

//OgreSceneQuery.h
typedef enum 
{
    WFT_NONE,
    WFT_PLANE_BOUNDED_REGION,
    WFT_SINGLE_INTERSECTION,
    WFT_CUSTOM_GEOMETRY,
    WFT_RENDER_OPERATION
} world_fragment_type;

//OgreLog.h
typedef enum
{
    LL_LOW = 1,
    LL_NORMAL = 2,
    LL_BOREME = 3
} logging_level;

typedef enum
{
    LML_TRIVIAL = 1,
    LML_NORMAL = 2,
    LML_CRITICAL = 3
} log_message_level;


typedef enum
{
    OR_DEGREE_0       = 0,
    OR_DEGREE_90      = 1,
    OR_DEGREE_180     = 2,
    OR_DEGREE_270     = 3,

    OR_PORTRAIT       = OR_DEGREE_0,
    OR_LANDSCAPERIGHT = OR_DEGREE_90,
    OR_LANDSCAPELEFT  = OR_DEGREE_270
} orientation_mode;

typedef enum
{
    PT_ORTHOGRAPHIC,
    PT_PERSPECTIVE
} projection_type;

typedef enum
{
    FRUSTUM_PLANE_NEAR   = 0,
    FRUSTUM_PLANE_FAR    = 1,
    FRUSTUM_PLANE_LEFT   = 2,
    FRUSTUM_PLANE_RIGHT  = 3,
    FRUSTUM_PLANE_TOP    = 4,
    FRUSTUM_PLANE_BOTTOM = 5
} frustum_plane;

typedef enum
{
    GMM_RELATIVE,
    GMM_PIXELS,
    GMM_RELATIVE_ASPECT_ADJUSTED
} gui_metrics_mode;

typedef enum
{
    GHA_LEFT,
    GHA_CENTER,
    GHA_RIGHT
} gui_horizontal_alignment;

typedef enum
{
    GVA_TOP,
    GVA_CENTER,
    GVA_BOTTOM
} gui_vertical_alignment;

typedef enum
{
    Left,
    Right,
    Center
} textarea_overlayelement_alignment;

typedef enum
{
    ANIMBLEND_AVERAGE = 0,
    ANIMBLEND_CUMULATIVE = 1
} skeleton_animation_blend_mode;

// OgreRenderOperation.h
typedef enum
{
    OT_POINT_LIST = 1,
    OT_LINE_LIST = 2,
    OT_LINE_STRIP = 3,
    OT_TRIANGLE_LIST = 4,
    OT_TRIANGLE_STRIP = 5,
    OT_TRIANGLE_FAN = 6
} operation_type;

typedef enum
{
    ST_GENERIC = 1,
    ST_EXTERIOR_CLOSE = 2,
    ST_EXTERIOR_FAR = 4,
    ST_EXTERIOR_REAL_FAR = 8,
    ST_INTERIOR = 16
} scene_type;


// OgreResource.h

typedef enum
{
    LOADSTATE_UNLOADED,
    LOADSTATE_LOADING,
    LOADSTATE_LOADED,
    LOADSTATE_UNLOADING,
    LOADSTATE_PREPARED,
    LOADSTATE_PREPARING
} loading_state;



// OgreCommon.h

typedef enum
{
    CMPF_ALWAYS_FAIL,
    CMPF_ALWAYS_PASS,
    CMPF_LESS,
    CMPF_LESS_EQUAL,
    CMPF_EQUAL,
    CMPF_NOT_EQUAL,
    CMPF_GREATER_EQUAL,
    CMPF_GREATER
} compare_function;

typedef enum
{
    TFO_NONE,
    TFO_BILINEAR,
    TFO_TRILINEAR,
    TFO_ANISOTROPIC
} texture_filter_options;

typedef enum
{
    FT_MIN,
    FT_MAG,
    FT_MIP
} filter_type;

typedef enum
{
    FO_NONE,
    FO_POINT,
    FO_LINEAR,
    FO_ANISOTROPIC
} filter_options;

typedef enum
{
    SO_FLAT,
    SO_GOURAUD,
    SO_PHONG
} shade_options;

typedef enum
{
    FOG_NONE,
    FOG_EXP,
    FOG_EXP2,
    FOG_LINEAR
} fog_mode;

typedef enum
{
    CULL_NONE = 1,
    CULL_CLOCKWISE = 2,
    CULL_ANTICLOCKWISE = 3
} culling_mode;

typedef enum
{
    MANUAL_CULL_NONE = 1,
    MANUAL_CULL_BACK = 2,
    MANUAL_CULL_FRONT = 3
} manual_culling_mode;

typedef enum
{
    WFT_SINE,
    WFT_TRIANGLE,
    WFT_SQUARE,
    WFT_SAWTOOTH,
    WFT_INVERSE_SAWTOOTH,
    WFT_PWM
} waveform_type;

typedef enum
{
    PM_POINTS = 1,
    PM_WIREFRAME = 2,
    PM_SOLID = 3
} polygon_mode;

typedef enum
{
    SHADOWTYPE_NONE = 0x00,
    SHADOWDETAILTYPE_ADDITIVE = 0x01,
    SHADOWDETAILTYPE_MODULATIVE = 0x02,
    SHADOWDETAILTYPE_INTEGRATED = 0x04,
    SHADOWDETAILTYPE_STENCIL = 0x10,
    SHADOWDETAILTYPE_TEXTURE = 0x20,
    SHADOWTYPE_STENCIL_MODULATIVE = 0x12,
    SHADOWTYPE_STENCIL_ADDITIVE = 0x11,
    SHADOWTYPE_TEXTURE_MODULATIVE = 0x22,
    SHADOWTYPE_TEXTURE_ADDITIVE = 0x21,
    SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED = 0x25,
    SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED = 0x26
} shadow_technique;

typedef int track_vertex_colour_type;

typedef enum
{
    TVC_NONE        = 0x0,
    TVC_AMBIENT     = 0x1,        
    TVC_DIFFUSE     = 0x2,
    TVC_SPECULAR    = 0x4,
    TVC_EMISSIVE    = 0x8
} track_vertex_colour_enum;

typedef enum
{
    SM_DIRECTION,
    SM_DISTANCE
} sort_mode;

typedef enum
{
    FBT_COLOUR  = 0x1,
    FBT_DEPTH   = 0x2,
    FBT_STENCIL = 0x4
} frame_buffer_type;

typedef enum
{
    IM_USE16BIT		= 0x0001,
    IM_VTFBESTFIT	= 0x0002,
    IM_VTFBONEMATRIXLOOKUP = 0x0004,
    IM_USEBONEDUALQUATERNIONS = 0x0008,
    IM_USEONEWEIGHT = 0x0010,
    IM_FORCEONEWEIGHT = 0x0020,
    IM_USEALL		= IM_USE16BIT|IM_VTFBESTFIT|IM_USEONEWEIGHT
} instance_manager_flags;

typedef enum
{
    CLIPPED_NONE = 0,
    CLIPPED_SOME = 1, 
    CLIPPED_ALL = 2
} clip_result;
typedef struct
{
    coiReal time_since_last_event;
    coiReal time_since_last_frame;
} FrameEvent;

typedef int(*FrameStarted)(const FrameEvent* event, void* userdata);
typedef int(*FrameEnded)(const FrameEvent* event, void* userdata);
typedef int(*FrameQueued)(const FrameEvent* event, void* userdata);
typedef int(*FrameListenerEvent)(float,float,int);

typedef enum
{
    KC_UNASSIGNED  = 0x00,
    KC_ESCAPE      = 0x01,
    KC_1           = 0x02,
    KC_2           = 0x03,
    KC_3           = 0x04,
    KC_4           = 0x05,
    KC_5           = 0x06,
    KC_6           = 0x07,
    KC_7           = 0x08,
    KC_8           = 0x09,
    KC_9           = 0x0A,
    KC_0           = 0x0B,
    KC_MINUS       = 0x0C,    // - on main keyboard
    KC_EQUALS      = 0x0D,
    KC_BACK        = 0x0E,    // backspace
    KC_TAB         = 0x0F,
    KC_Q           = 0x10,
    KC_W           = 0x11,
    KC_E           = 0x12,
    KC_R           = 0x13,
    KC_T           = 0x14,
    KC_Y           = 0x15,
    KC_U           = 0x16,
    KC_I           = 0x17,
    KC_O           = 0x18,
    KC_P           = 0x19,
    KC_LBRACKET    = 0x1A,
    KC_RBRACKET    = 0x1B,
    KC_RETURN      = 0x1C,    // Enter on main keyboard
    KC_LCONTROL    = 0x1D,
    KC_A           = 0x1E,
    KC_S           = 0x1F,
    KC_D           = 0x20,
    KC_F           = 0x21,
    KC_G           = 0x22,
    KC_H           = 0x23,
    KC_J           = 0x24,
    KC_K           = 0x25,
    KC_L           = 0x26,
    KC_SEMICOLON   = 0x27,
    KC_APOSTROPHE  = 0x28,
    KC_GRAVE       = 0x29,    // accent
    KC_LSHIFT      = 0x2A,
    KC_BACKSLASH   = 0x2B,
    KC_Z           = 0x2C,
    KC_X           = 0x2D,
    KC_C           = 0x2E,
    KC_V           = 0x2F,
    KC_B           = 0x30,
    KC_N           = 0x31,
    KC_M           = 0x32,
    KC_COMMA       = 0x33,
    KC_PERIOD      = 0x34,    // . on main keyboard
    KC_SLASH       = 0x35,    // / on main keyboard
    KC_RSHIFT      = 0x36,
    KC_MULTIPLY    = 0x37,    // * on numeric keypad
    KC_LMENU       = 0x38,    // left Alt
    KC_SPACE       = 0x39,
    KC_CAPITAL     = 0x3A,
    KC_F1          = 0x3B,
    KC_F2          = 0x3C,
    KC_F3          = 0x3D,
    KC_F4          = 0x3E,
    KC_F5          = 0x3F,
    KC_F6          = 0x40,
    KC_F7          = 0x41,
    KC_F8          = 0x42,
    KC_F9          = 0x43,
    KC_F10         = 0x44,
    KC_NUMLOCK     = 0x45,
    KC_SCROLL      = 0x46,    // Scroll Lock
    KC_NUMPAD7     = 0x47,
    KC_NUMPAD8     = 0x48,
    KC_NUMPAD9     = 0x49,
    KC_SUBTRACT    = 0x4A,    // - on numeric keypad
    KC_NUMPAD4     = 0x4B,
    KC_NUMPAD5     = 0x4C,
    KC_NUMPAD6     = 0x4D,
    KC_ADD         = 0x4E,    // + on numeric keypad
    KC_NUMPAD1     = 0x4F,
    KC_NUMPAD2     = 0x50,
    KC_NUMPAD3     = 0x51,
    KC_NUMPAD0     = 0x52,
    KC_DECIMAL     = 0x53,    // . on numeric keypad
    KC_OEM_102     = 0x56,    // < > | on UK/Germany keyboards
    KC_F11         = 0x57,
    KC_F12         = 0x58,
    KC_F13         = 0x64,    //                     (NEC PC98)
    KC_F14         = 0x65,    //                     (NEC PC98)
    KC_F15         = 0x66,    //                     (NEC PC98)
    KC_KANA        = 0x70,    // (Japanese keyboard)
    KC_ABNT_C1     = 0x73,    // / ? on Portugese (Brazilian) keyboards
    KC_CONVERT     = 0x79,    // (Japanese keyboard)
    KC_NOCONVERT   = 0x7B,    // (Japanese keyboard)
    KC_YEN         = 0x7D,    // (Japanese keyboard)
    KC_ABNT_C2     = 0x7E,    // Numpad . on Portugese (Brazilian) keyboards
    KC_NUMPADEQUALS= 0x8D,    // = on numeric keypad (NEC PC98)
    KC_PREVTRACK   = 0x90,    // Previous Track (KC_CIRCUMFLEX on Japanese keyboard)
    KC_AT          = 0x91,    //                     (NEC PC98)
    KC_COLON       = 0x92,    //                     (NEC PC98)
    KC_UNDERLINE   = 0x93,    //                     (NEC PC98)
    KC_KANJI       = 0x94,    // (Japanese keyboard)
    KC_STOP        = 0x95,    //                     (NEC PC98)
    KC_AX          = 0x96,    //                     (Japan AX)
    KC_UNLABELED   = 0x97,    //                        (J3100)
    KC_NEXTTRACK   = 0x99,    // Next Track
    KC_NUMPADENTER = 0x9C,    // Enter on numeric keypad
    KC_RCONTROL    = 0x9D,
    KC_MUTE        = 0xA0,    // Mute
    KC_CALCULATOR  = 0xA1,    // Calculator
    KC_PLAYPAUSE   = 0xA2,    // Play / Pause
    KC_MEDIASTOP   = 0xA4,    // Media Stop
    KC_VOLUMEDOWN  = 0xAE,    // Volume -
    KC_VOLUMEUP    = 0xB0,    // Volume +
    KC_WEBHOME     = 0xB2,    // Web home
    KC_NUMPADCOMMA = 0xB3,    // , on numeric keypad (NEC PC98)
    KC_DIVIDE      = 0xB5,    // / on numeric keypad
    KC_SYSRQ       = 0xB7,
    KC_RMENU       = 0xB8,    // right Alt
    KC_PAUSE       = 0xC5,    // Pause
    KC_HOME        = 0xC7,    // Home on arrow keypad
    KC_UP          = 0xC8,    // UpArrow on arrow keypad
    KC_PGUP        = 0xC9,    // PgUp on arrow keypad
    KC_LEFT        = 0xCB,    // LeftArrow on arrow keypad
    KC_RIGHT       = 0xCD,    // RightArrow on arrow keypad
    KC_END         = 0xCF,    // End on arrow keypad
    KC_DOWN        = 0xD0,    // DownArrow on arrow keypad
    KC_PGDOWN      = 0xD1,    // PgDn on arrow keypad
    KC_INSERT      = 0xD2,    // Insert on arrow keypad
    KC_DELETE      = 0xD3,    // Delete on arrow keypad
    KC_LWIN        = 0xDB,    // Left Windows key
    KC_RWIN        = 0xDC,    // Right Windows key
    KC_APPS        = 0xDD,    // AppMenu key
    KC_POWER       = 0xDE,    // System Power
    KC_SLEEP       = 0xDF,    // System Sleep
    KC_WAKE        = 0xE3,    // System Wake
    KC_WEBSEARCH   = 0xE5,    // Web Search
    KC_WEBFAVORITES= 0xE6,    // Web Favorites
    KC_WEBREFRESH  = 0xE7,    // Web Refresh
    KC_WEBSTOP     = 0xE8,    // Web Stop
    KC_WEBFORWARD  = 0xE9,    // Web Forward
    KC_WEBBACK     = 0xEA,    // Web Back
    KC_MYCOMPUTER  = 0xEB,    // My Computer
    KC_MAIL        = 0xEC,    // Mail
    KC_MEDIASELECT = 0xED     // Media Select
}  KeyCode;

typedef struct 
{
    KeyCode key;
    unsigned int text;
} KeyEvent;

typedef enum
{
    Shift = 0x0000001,
    Ctrl  = 0x0000010,
    Alt   = 0x0000100
} KeyModifier;

typedef struct
{
    //! Absolute and Relative value components
    int abs, rel;
    //! Indicates if this Axis only supports absolute (ie JoyStick)
    int absOnly;
} Axis;

typedef struct
{
    Axis X;
    Axis Y;
    Axis Z;
    int buttons;
} MouseState;

typedef enum
{
    MB_Left = 0, MB_Right, MB_Middle,
    MB_Button3, MB_Button4, MB_Button5, MB_Button6, MB_Button7
} MouseButtonID;

// Callbacks for MouseListeners
typedef int(*MouseMovedEvent)(const MouseState* event, void* userdata);
typedef int(*MousePressedEvent)(const MouseState* event, MouseButtonID id, void* userdata);
typedef int(*MouseReleasedEvent)(const MouseState* event, MouseButtonID id, void* userdata);

typedef void(*LogListenerEvent)(const char* message, log_message_level lml, int maskDebug, const char* log_name, int skip_message);

// Same as LogListenerEvent but allows the client to
// send additional data via a void pointer. We assume the
// client knows what they're doing if they use this. (:
typedef void(*LogListenerCtx)(const char* message, log_message_level lml, int maskDebug, const char* log_name, int skip_message, void* userdata);

typedef struct
{
    int intersects;
    coiReal distance;
} ray_pair;

typedef struct world_fragment
{
    world_fragment_type fragment_type;
    coiVector3 single_intersection;
    PlaneListHandle planes;
    void* geometry;
    RenderOperationHandle render_op;
    
} world_fragment;

typedef struct rayscenequery_result_entry
{
    coiReal distance;
    MovableObjectHandle movable;
    world_fragment* fragment;

} rayscenequery_result_entry;

typedef int(*SceneQueryFragmentResult)(const world_fragment* frag, void* userdata);
typedef int(*SceneQueryObjectResult)(MovableObjectHandle handle, void* userdata);

typedef int(*RaySceneQueryFragmentResult)(const world_fragment* frag, coiReal distance, void* userdata);
typedef int(*RaySceneQueryObjectResult)(MovableObjectHandle handle, coiReal distance, void* userdata);



