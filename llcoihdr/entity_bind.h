#pragma once

#include "ogre_interface.h"

DLL EntityHandle create_entity(const char* entity_name, const char* mesh_file);

DLL const MeshPtrHandle entity_get_mesh(const EntityHandle handle);

DLL unsigned int entity_get_num_sub_entities(const EntityHandle handle);

DLL EntityHandle entity_clone(const EntityHandle handle, const char* name);

DLL void entity_set_cast_shadows(EntityHandle handle, int enabled);

DLL int entity_get_cast_shadows(const EntityHandle handle);

DLL int entity_get_receives_shadows(EntityHandle handle);

DLL void entity_set_material_name(EntityHandle handle, const char* material_name, const char* group_name);

DLL void entity_set_material(EntityHandle handle, MaterialPtrHandle mat);

DLL void entity__notify_current_camera(EntityHandle handle, CameraHandle cam);

DLL void entity_set_render_queue_group(EntityHandle handle, unsigned char queue_id);

DLL void entity_set_render_queue_group_and_priority(EntityHandle handle, unsigned char queue_id, unsigned short priority);

DLL AxisAlignedBoxHandle entity_get_bounding_box(const EntityHandle handle);

DLL coiReal entity_get_bounding_radius(const EntityHandle handle);

DLL void entity_set_display_skeleton(EntityHandle handle, int display);

DLL int entity_get_display_skeleton(const EntityHandle handle);

DLL int entity_has_skeleton(const EntityHandle handle);

DLL SkeletonInstanceHandle entity_get_skeleton(const EntityHandle handle);

DLL int entity_is_hardware_animation_enabled(EntityHandle handle);
