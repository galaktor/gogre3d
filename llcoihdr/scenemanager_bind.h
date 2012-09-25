#pragma once

#include "ogre_interface.h"

// creates a child on the rootscenenode
DLL SceneNodeHandle create_child_scenenode(SceneManagerHandle scene_manager_handle, const char* node_name);

DLL EntityHandle create_entity(SceneManagerHandle scene_manager_handle, const char* entity_name, const char* mesh_file);

DLL LightHandle create_light(SceneManagerHandle scene_manager_handle, const char* light_name);

DLL CameraHandle create_camera(SceneManagerHandle scene_manager_handle, const char* camera_name);

DLL CameraHandle get_camera(SceneManagerHandle scene_manager_handle, const char* camera_name);

DLL void set_ambient_light_rgba(SceneManagerHandle scene_manager_handle, const float r, const float g, const float b, const float a);

DLL void set_ambient_light_rgb(SceneManagerHandle scene_manager_handle, const float r, const float g, const float b);
