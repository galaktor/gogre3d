#pragma once

#include "ogre_interface.h"

//Bone(unsigned short handle, Skeleton* creator);
DLL BoneHandle create_bone(unsigned short handle, SkeletonHandle creator);
//Bone(const String& name, unsigned short handle, Skeleton* creator);
DLL BoneHandle create_named_bone(const char* name, unsigned short handle, SkeletonHandle creator);
//~Bone();
DLL void destroy_bone(BoneHandle obj);
//Bone* createChild(unsigned short handle, const Vector3& translate = Vector3::ZERO, const Quaternion& rotate = Quaternion::IDENTITY);
DLL BoneHandle bone_create_child(BoneHandle obj, unsigned short handle, const coiVector3* translate, const coiQuaternion* rotate);
//unsigned short getHandle(void) const;
DLL unsigned short bone_get_handle(const BoneHandle handle);
//void setBindingPose(void);
DLL void bone_set_binding_pose(BoneHandle handle);
//void reset(void);
DLL void bone_reset(BoneHandle handle);
//void setManuallyControlled(bool manuallyControlled);
DLL void bone_set_manually_controlled(BoneHandle handle, int manually_controlled);
//bool isManuallyControlled() const;
DLL int bone_is_manually_controlled(const BoneHandle handle);
//void _getOffsetTransform(Matrix4& m) const;
DLL void bone__get_offset_transform(const BoneHandle handle, coiMatrix4* m);
//const Vector3& _getBindingPoseInverseScale(void) const;
DLL void bone__get_binding_pose_inverse_scale(const BoneHandle handle, coiVector3* result);
//const Vector3& _getBindingPoseInversePosition(void) const;
DLL void bone__get_binding_pose_inverse_position(const BoneHandle handle, coiVector3* result);
//const Quaternion& _getBindingPoseInverseOrientation(void) const;
DLL void bone__get_binding_pose_inverse_orientation(const BoneHandle handle, coiQuaternion* result);
//void needUpdate(bool forceParentUpdate = false);
DLL void bone_need_update(BoneHandle handle, int force_parent_update);
