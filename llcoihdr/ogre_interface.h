#pragma once

// Detect platform
#if defined( WINCE )
#   if !defined( PLATFORM_WIN_CE )
#       define PLATFORM_WIN_CE
#   endif
#elif defined( WIN32 ) || defined( _WINDOWS )
#   if !defined( PLATFORM_WIN )
#       define PLATFORM_WIN
#   endif
#elif defined( __APPLE__ ) || defined( __APPLE_CC__ )
#   if !defined( PLATFORM_MAC )
#      define PLATFORM_MAC
#   endif
#else
#   if !defined( PLATFORM_LINUX )
#       define PLATFORM_LINUX
#   endif
#endif

#if defined(LLCOI_BUILD_DYNAMIC)
#   if defined( WIN32 ) || defined( _WINDOWS )
#       ifndef llcoi_EXPORTS
#           define DLL __declspec(dllimport)
#       else
#           define DLL extern "C" __declspec(dllexport)
#       endif
#   else
#       ifndef llcoi_EXPORTS
#           define DLL
#       else
#           if defined( __GNUC__ ) && __GNUC__ >= 4
#               define DLL extern "C" __attribute__ ((visibility("default")))
#           else
#               define DLL extern "C"
#           endif
#       endif
#   endif
#else
#   if defined( LLCOI_BUILD_STATIC )
#       if defined( __GNUC__ ) && __GNUC__ >= 4
#           define DLL extern "C" __attribute__ ((visibility("default")))
#       else
#           define DLL extern "C"
#       endif
#   else
#       define DLL
#   endif
#endif

// galaktor's galakt-tic hack: force extern "C" when not using CMake
#ifdef __cplusplus
#define DLL extern "C"
#endif

#include <stddef.h> // for size_t

// TODO: merge common/fwd etc
#include "fwd.h"
#include "timer_bind.h"
#include "camera_bind.h"
#include "renderwindow_bind.h"
#include "rendersystem_bind.h"

#include "meshmanager_bind.h"
#include "material_bind.h"
#include "materialmanager_bind.h"
#include "ray_bind.h"
#include "skeletoninstance_bind.h"
#include "entity_bind.h"
#include "node_bind.h"
#include "manualobject_bind.h"
#include "light_bind.h"
#include "sphere_bind.h"
#include "movableobject_bind.h"
#include "scenequery_bind.h"
#include "scenenode_bind.h"
#include "scenemanager_bind.h"
#include "root_bind.h"
#include "viewport_bind.h"
#include "resourcegroupmanager_bind.h"
#include "windoweventlistener_bind.h"
#include "framelistener_bind.h"
#include "overlay_bind.h"
#include "overlaycontainer_bind.h"
#include "resourcemanager_bind.h"
#include "resource_bind.h"
#include "texturemanager_bind.h"
// probably some missing; check llcoi.h for complete(r) list

