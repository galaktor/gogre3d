#pragma once

#include "ogre_interface.h"

//~SkeletonInstance();
DLL void destroy_skeletoninstance(SkeletonInstanceHandle handle);
//unsigned short getNumAnimations(void) const;
DLL unsigned short skeletoninstance_get_num_animations(const SkeletonInstanceHandle handle);
//TODO: Animation* getAnimation(unsigned short index) const;
//TODO: Animation* _getAnimationImpl(const String& name,  const LinkedSkeletonAnimationSource** linker = 0) const;
//TODO: Animation* createAnimation(const String& name, Real length);
//TODO: Animation* getAnimation(const String& name,  const LinkedSkeletonAnimationSource** linker = 0) const;
//void removeAnimation(const String& name);
DLL void skeletoninstance_remove_animation(SkeletonInstanceHandle handle, const char* name);
//TagPoint* createTagPointOnBone(Bone* bone, const Quaternion &offsetOrientation = Quaternion::IDENTITY,const Vector3 &offsetPosition = Vector3::ZERO);
DLL TagPointHandle skeletoninstance_create_tag_point_on_bone(SkeletonInstanceHandle handle, BoneHandle bone_handle, const coiQuaternion* offset_orientation, const coiVector3* offset_position);
//void freeTagPoint(TagPoint* tagPoint);
DLL void skeletoninstance_free_tag_point(SkeletonInstanceHandle handle, TagPointHandle tag_point);
//void addLinkedSkeletonAnimationSource(const String& skelName, Real scale = 1.0f);
DLL void skeletoninstance_add_linked_skeleton_animation_source(SkeletonInstanceHandle handle, const char* skel_name, coiReal scale);
//void removeAllLinkedSkeletonAnimationSources(void);
DLL void skeletoninstance_remove_all_linked_skeleton_animation_sources(SkeletonInstanceHandle handle);
//TODO: LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator(void) const;
//TODO: void _initAnimationState(AnimationStateSet* animSet);
//TODO: void _refreshAnimationState(AnimationStateSet* animSet);
//const String& getName(void) const;
DLL const char*  skeletoninstance_get_name(const SkeletonInstanceHandle handle);
//TODO: ResourceHandle getHandle(void) const;
//const String& getGroup(void);
DLL const char* skeletoninstance_get_group(SkeletonInstanceHandle handle);
