#pragma once

#include "ogre_interface.h"

DLL RootHandle root_singleton();

DLL RootHandle create_root(const char* pluginFileName, const char* configFileName, const char* logFileName);
DLL TimerHandle root_get_timer(RootHandle root_handle);

DLL SceneManagerHandle root_create_scene_manager_by_mask(RootHandle root_handle, SceneTypeMask type_mask, const char* instance_name);
//DLL RenderWindowHandle root_create_render_window(const char* name, unsigned int width, unsigned int height, int fullscreen, NameValuePairListHandle params);
DLL RenderSystemListHandle root_get_available_renderers(RootHandle root_handle);

DLL void delete_root(RootHandle root_handle);

DLL RenderWindowHandle root_initialise(RootHandle root_handle, int auto_create_window, const char* render_window_title);

DLL RenderWindowHandle create_render_window(RootHandle root_handle, const char* name, const int width, const int height, const int full_screen);

DLL RenderWindowHandle create_render_window_hwnd(RootHandle root_handle, const char* name, const int width, const int height, const int full_screen, unsigned long hwnd);

DLL RenderWindowHandle create_render_window_gl_context(RootHandle root_handle, const char* name, const int width, const int height, const int full_screen);

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
