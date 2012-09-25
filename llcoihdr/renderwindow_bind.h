/******************************************************************************
 * renderwindow_bind.h - bindings for Ogre::RenderWindow
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

DLL ViewportHandle add_viewport(RenderWindowHandle render_window_handle, CameraHandle camera_handle);

DLL unsigned int render_window_get_hwnd(RenderWindowHandle window_handle);

DLL void render_window_set_visible(RenderWindowHandle window_handle, int visible);

DLL void render_window_update(RenderWindowHandle window_handle, int swap_buffers);

DLL void current_window_update(RenderWindowHandle window_handle, int swap_buffers);

DLL void render_window_resize(RenderWindowHandle window_handle, unsigned int width, unsigned int height);

DLL void render_window_moved_or_resized(RenderWindowHandle window_handle);

DLL int render_window_closed(RenderWindowHandle window_handle);



