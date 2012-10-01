#pragma once

#include "ogre_interface.h"

DLL void scenenode_attach_entity(SceneNodeHandle scenenode_handle, EntityHandle entity_handle);

DLL SceneNodeHandle scenenode_create_child_scenenode(SceneNodeHandle handle, const char* name, const coiVector3* translate, const coiQuaternion* rotate);

DLL SceneNodeHandle scenenode_create_child_scenenode_anon(SceneNodeHandle handle, const coiVector3* translate, const coiQuaternion* rotate);

DLL void scenenode_update(SceneNodeHandle scenenode_handle, int update_children, int parent_has_changed);

DLL void scenenode_update_bounds(SceneNodeHandle scenenode_handle);

DLL EntityHandle scenenode_get_attached_entity_int(SceneNodeHandle scenenode_handle, int entity_index);

DLL EntityHandle scenenode_get_attached_entity(SceneNodeHandle scenenode_handle, const char* entity_name);

DLL unsigned short scenenode_num_attached_objects(SceneNodeHandle scenenode_handle);

DLL void scenenode_detach_entity_int(SceneNodeHandle scenenode_handle, int entity_index);

DLL void scenenode_detach_entity(SceneNodeHandle scenenode_handle, EntityHandle entity_handle);

DLL void scenenode_detach_entity_string(SceneNodeHandle scenenode_handle, const char* entity_name);

DLL void scenenode_detach_all_objects(SceneNodeHandle scenenode_handle);

DLL int scenenode_is_in_scenegraph(SceneNodeHandle scenenode_handle);

DLL void scenenode_notify_rootnode(SceneNodeHandle scenenode_handle);

DLL void scenenode_show_boundingbox(SceneNodeHandle scenenode_handle, int show_boundingbox);

DLL void scenenode_hide_boundingbox(SceneNodeHandle scenenode_handle, int hide_boundingbox);

DLL int scenenode_get_show_boundingbox(SceneNodeHandle scenenode_handle);

DLL SceneNodeHandle scenenode_get_parent_scenenode(SceneNodeHandle scenenode_handle);

DLL void scenenode_set_visible(SceneNodeHandle scenenode_handle, int visible);

DLL void scenenode_set_visible_ex(SceneNodeHandle scenenode_handle, int visible, int cascade);

DLL void scenenode_flip_visibility(SceneNodeHandle scenenode_handle);

DLL void scenenode_flip_visibility_ex(SceneNodeHandle scenenode_handle, int cascade);

DLL void scenenode_set_debug_display_enabled(SceneNodeHandle scenenode_handle, int enabled);

DLL void scenenode_set_debug_display_enabled_ex(SceneNodeHandle scenenode_handle, int enabled, int cascade);

DLL SceneManagerHandle scenenode_get_creator(SceneNodeHandle scenenode_handle);

DLL void scenenode_set_direction(SceneNodeHandle scenenode_handle, float x, float y, float z, transform_space relative_to);

DLL void scenenode_set_orientation(SceneNodeHandle scenenode_handle, float w, float x, float y, float z);

DLL void scenenode_set_position(SceneNodeHandle scenenode_handle, float x, float y, float z);

DLL void scenenode_get_position(SceneNodeHandle handle, coiVector3* pos);

DLL void scenenode_set_derived_position(SceneNodeHandle handle, const coiVector3* pos);

DLL void scenenode_get_derived_position(SceneNodeHandle handle, coiVector3* pos);
//void setFixedYawAxis( bool useFixed, const Vector3& fixedAxis = Vector3::UNIT_Y );
DLL void scenenode_set_fixed_yaw_axis(SceneNodeHandle handle, int use_fixed, const coiVector3* fixed_axis);
DLL void scenenode_yaw_degree(SceneNodeHandle handle, coiReal angle, transform_space relative_to);
DLL void scenenode_yaw(SceneNodeHandle scenenode_handle, coiReal radians, transform_space relative_to);

DLL void scenenode_set_scale(SceneNodeHandle scenenode_handle, float x, float y, float z);

DLL void scenenode_translate(SceneNodeHandle scenenode_handle, float x, float y, float z, transform_space relative_to);
DLL void scenenode_roll(SceneNodeHandle scenenode_handle, coiReal radians, transform_space relative_to);
DLL void scenenode_pitch(SceneNodeHandle scenenode_handle, coiReal radians, transform_space relative_to);


DLL void scenenode_scale(SceneNodeHandle scenenode_handle, float x, float y, float z);
