#pragma once

#include "ogre_interface.h"

DLL ViewportHandle add_viewport(CameraHandle camera_handle);

DLL void viewport_set_background_colour(ViewportHandle viewport_handle, float r, float g, float b, float a);

DLL void viewport_set_background_colour_cv(ViewportHandle viewport_handle, coiColourValue* cv);

DLL void viewport_set_auto_updated(ViewportHandle handle, int autoupdate);

DLL int viewport_is_auto_updated(ViewportHandle handle);

DLL float viewport_get_top(ViewportHandle handle);

DLL float viewport_get_left(ViewportHandle handle);

DLL float viewport_get_width(ViewportHandle viewport_handle);

DLL float viewport_get_height(ViewportHandle viewport_handle);

DLL int viewport_get_actual_top(ViewportHandle handle);

DLL int viewport_get_actual_left(ViewportHandle handle);

DLL int viewport_get_actual_width(ViewportHandle handle);

DLL int viewport_get_actual_height(ViewportHandle handle);

DLL void viewport_set_dimensions(ViewportHandle handle, coiReal left, coiReal top, coiReal width, coiReal height);

DLL void viewport_get_actual_dimensions(ViewportHandle handle, int* left, int* top, int* width, int* height);

DLL void viewport_get_background_colour(ViewportHandle handle, coiColourValue* cv);
