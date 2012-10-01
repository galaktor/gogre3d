#pragma once

#include "ogre_interface.h"

DLL const char * render_system_get_name(RenderSystemHandle handle);
DLL void render_system_set_config_option(RenderSystemHandle render_system_handle, const char* option, const char* value);
DLL unsigned int render_system_list_size(RenderSystemListHandle list_handle);
DLL RenderSystemHandle render_system_list_get(RenderSystemListHandle list_handle, unsigned int index);
DLL void destroy_render_system_list(RenderSystemListHandle handle);
