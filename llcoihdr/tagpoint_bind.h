#pragma once

#include "ogre_interface.h"

//TagPoint(unsigned short handle, Skeleton* creator);
DLL TagPointHandle create_tagpoint(unsigned short bone_handle, SkeletonHandle creator);
//~TagPoint();
DLL void destroy_tagpoint(TagPointHandle handle);
//Entity *getParentEntity(void) const;
DLL EntityHandle tagpoint_get_parent_entity(const TagPointHandle handle);
//MovableObject* getChildObject(void) const;
DLL MovableObjectHandle tagpoint_get_child_object(const TagPointHandle handle);
//void setParentEntity(Entity *pEntity);
DLL void tagpoint_set_parent_entity(TagPointHandle handle, EntityHandle entity);
//void setChildObject(MovableObject *pObject);
DLL void tagpoint_set_child_object(TagPointHandle handle, MovableObjectHandle obj);
//void setInheritParentEntityOrientation(bool inherit);
DLL void tagpoint_set_inherit_parent_entity_orientation(TagPointHandle handle, int inherit);
//bool getInheritParentEntityOrientation(void) const;
DLL int tagpoint_get_inherit_parent_entity_orientation(const TagPointHandle handle);
//void setInheritParentEntityScale(bool inherit);
DLL void tagpoint_set_inherit_parent_entity_scale(TagPointHandle handle, int inherit);
//bool getInheritParentEntityScale(void) const;
DLL int tagpoint_get_inherit_parent_entity_scale(const TagPointHandle handle);
//const Matrix4& getParentEntityTransform(void) const;
DLL void tagpoint_get_parent_entity_transform(const TagPointHandle handle, coiMatrix4* result);
//const Matrix4& _getFullLocalTransform(void) const;
DLL void tagpoint__get_full_local_transform(const TagPointHandle handle, coiMatrix4* result);
//void needUpdate(bool forceParentUpdate = false);
DLL void tagpoint_need_update(TagPointHandle handle, int force_parent_update);
//void updateFromParentImpl(void) const;
DLL void tagpoint_update_from_parent_impl(const TagPointHandle handle);
//TODO: const LightList& getLights(void) const;
