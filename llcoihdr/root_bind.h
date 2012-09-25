/******************************************************************************
 * root_bind.h - include file for root functionality
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
 * See https://bitbucket.org/galaktor/llcoi for more information.
 *
 * Copyright (c) 2012, Llcoi Team
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

#include "ogre_interface.h"

DLL RootHandle root_singleton();

DLL RootHandle create_root(const char* pluginFileName, const char* configFileName, const char* logFileName);

DLL void delete_root(RootHandle root_handle);

DLL RenderWindowHandle root_initialise(RootHandle root_handle, int auto_create_window, const char* render_window_title);

DLL RenderWindowHandle create_render_window(const char* name, const int width, const int height, const int full_screen);

DLL RenderWindowHandle create_render_window_hwnd(const char* name, const int width, const int height, const int full_screen, unsigned long hwnd);

DLL RenderWindowHandle create_render_window_gl_context(const char* name, const int width, const int height, const int full_screen);

DLL int root_is_initialised(RootHandle root_handle);

DLL void save_config(RootHandle root_handle);

DLL int restore_config(RootHandle root_handle);

DLL int show_config_dialog(RootHandle root_handle);

DLL void add_render_system(RootHandle root_handle, RenderSystemHandle render_system);

DLL void set_render_system(RootHandle root_handle, RenderSystemHandle render_system);

DLL RenderSystemHandle get_render_system(RootHandle root_handle);

DLL RenderSystemHandle get_render_system_by_name(RootHandle root_handle, const char* render_system_name);

DLL void load_ogre_plugin(RootHandle root_handle, const char * plugin);

DLL int render_one_frame(RootHandle root_handle);

DLL int render_one_frame_ex(RootHandle root_handle, float time_since_last_frame);

DLL SceneManagerHandle create_scene_manager(RootHandle root_handle, const char* type_name, const char* instance_name);

DLL SceneManagerHandle get_scene_manager_by_name(RootHandle root_handle, const char* scene_manager_instance_name);


// ******** convenience/boilerplate helpers ***********
/*
                                                       
DLL SceneManagerHandle get_scene_manager(RootHandle root_handle);
                        
typedef struct                                                                        
{                                                                                     
    const char* renderer_s;                                                           
    const char* plugin_folder_s;                                                      
    const char* window_title;                                                         
    const char* log_name;                                                             
    int width, height, auto_window;                                                   
} engine_options;                                                                     


DLL void render_loop();

DLL RootHandle init_engine(const engine_options options);

DLL void release_engine(RootHandle root_handle);

DLL void default_engine_options(engine_options* options);

DLL RootHandle root_singleton();
*/
