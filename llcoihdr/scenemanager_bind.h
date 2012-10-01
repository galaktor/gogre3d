#pragma once

#include "ogre_interface.h"

// creates a child on the rootscenenode
DLL SceneNodeHandle create_child_of_root_scenenode(SceneManagerHandle scene_manager_handle, const char* node_name);

// TODO: define enums or similar for groups Default, Autodetect etc.
DLL EntityHandle scenemanager_create_entity(SceneManagerHandle handle, const char* name, const char* mesh_name, const char* group_name);
//createCamera(const String& name);
DLL CameraHandle scenemanager_create_camera(SceneManagerHandle handle, const char* name);
//createManualObject(std::string const&)
DLL ManualObjectHandle scenemanager_create_manual_object(SceneManagerHandle handle, const char* name);
//createManualObject()
DLL ManualObjectHandle scenemanager_create_manual_object_unnamed(SceneManagerHandle handle);
//getManualObject(std::string const&) const
DLL ManualObjectHandle scenemanager_get_manual_object(const SceneManagerHandle handle, const char* name);
//hasManualObject(std::string const&) const
DLL int scenemanager_has_manual_object(const SceneManagerHandle handle, const char* name);
//destroyManualObject(Ogre::ManualObject*)
DLL void scenemanager_destroy_manual_object(SceneManagerHandle handle, ManualObjectHandle obj);
//destroyManualObject(std::string const&)
DLL void scenemanager_destroy_manual_object_by_name(SceneManagerHandle handle, const char* name);
//destroyAllManualObjects()
DLL void scenemanager_destroy_all_manual_objects(SceneManagerHandle handle);

DLL SceneNodeHandle scenemanager_get_root_scene_node(SceneManagerHandle handle);

DLL LightHandle scenemanager_create_light(SceneManagerHandle handle, const char* name);

DLL CameraHandle scenemanager_get_camera(SceneManagerHandle scene_manager_handle, const char* camera_name);

DLL void scenemanager_set_sky_box(SceneManagerHandle handle, int enable, const char* material_name, float distance, int draw_first, const coiQuaternion* orientation,  const char* group_name);

DLL void scenemanager_set_ambient_light_rgba(SceneManagerHandle scene_manager_handle, const float r, const float g, const float b, const float a);

DLL void scenemanager_set_sky_dome(SceneManagerHandle handle, int enable, const char* material_name, float curvature, float tiling, float distance, int draw_first, const coiQuaternion* orientation, int xsegments, int ysegments, int ysegments_keep, const char* group_name);

DLL void scenemanager_set_ambient_light_rgb(SceneManagerHandle scene_manager_handle, const float r, const float g, const float b);

DLL const char* scenemanager_get_name(SceneManagerHandle handle);
//void SceneManager::destroyQuery(Ogre::SceneQuery* query);
DLL void scenemanager_destroy_scenequery(SceneManagerHandle handle, SceneQueryHandle query);
//RaySceneQuery* SceneManager::createRayQuery(const Ray& ray, unsigned long mask = 0xFFFFFFFF)
DLL RaySceneQueryHandle scenemanager_create_rayquery(SceneQueryHandle handle, RayHandle ray_handle, unsigned long mask);
