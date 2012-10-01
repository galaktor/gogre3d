#pragma once

typedef float coiReal;

typedef void* NameValuePairListHandle;
// From OgreResource.h
typedef unsigned long long int ResourceHandle;
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
