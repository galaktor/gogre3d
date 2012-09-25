/******************************************************************************
 * ogre_interface.h - main include file for C clients
 ******************************************************************************
 * This file is part of
 *     __ __              _ 
 *    / // /_____ ____   (_)
 *   / // // ___// __ \ / / 
 *  / // // /__ / /_/ // /  
 * /_//_/ \___/ \____//_/   
 *                          
 * Low Level C Ogre Interface (llcoi)
 *
 * See http://code.google.com/p/llcoi/ for more information.
 *
 * Copyright (c) 2011, Llcoi Team
 * 
 * License: MIT
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/
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

// RAPH force extern c
#ifdef __cplusplus
#define DLL extern "C"
#endif


// handle typedefs
typedef void* RootHandle;
typedef void* CameraHandle;
typedef void* EntityHandle;
typedef void* SceneNodeHandle;
typedef void* LightHandle;
typedef void* RenderWindowHandle;
typedef void* RenderSystemHandle;
typedef void* SceneManagerHandle;
typedef void* ViewportHandle;
// listener typedefs
typedef int(*FrameListenerEvent)(float,float,int);
typedef void(*WindowListenerEvent)(RenderWindowHandle);


// TODO: move into framelistener bind?
#define EVENT_FRAME_STARTED 1
#define EVENT_FRAME_RENDERING_QUEUED 2
#define EVENT_FRAME_ENDED 4


#include "common.h"
#include "root_bind.h"
#include "renderwindow_bind.h"
#include "rendersystem_bind.h"
#include "camera_bind.h"
#include "scenemanager_bind.h"
#include "scenenode_bind.h"
//#include "entity_bind.h" // contains nothing (yet)
#include "viewport_bind.h"
#include "resourcegroupmanager_bind.h"
#include "light_bind.h"
#include "windoweventlistener_bind.h"
#include "framelistener_bind.h"

// TODO: move into subfiles
DLL void scene_manager_log_name();
// TODO: move out of main.cpp
DLL void log_message(const char* message);
DLL void set_default_num_mipmaps(int number);



