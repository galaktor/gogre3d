#pragma once

#include "ogre_interface.h"

//Ogre::Node::getName() const
DLL const char* node_get_name(NodeHandle handle);
//Ogre::Node::getParent() const
//XXX: May be NULL if this is the root node.
DLL NodeHandle node_get_parent(NodeHandle handle);
//Ogre::Node::getOrientation() const
DLL void node_get_orientation(NodeHandle handle, coiQuaternion* result);
//Ogre::Node::setOrientation(Ogre::Quaternion const&)
DLL void node_set_orientation(NodeHandle handle, const coiQuaternion* orientation);
//Ogre::Node::setScale(Ogre::Vector3 const&)
DLL void node_set_scale(NodeHandle handle, const coiVector3* in_scale);
//Ogre::Node::setScale(Ogre::Vector3 const&)
DLL void node_set_scale_xyz(NodeHandle handle, const float x, const float y, const float z);
//Ogre::Node::getScale() const
DLL void node_get_scale(NodeHandle handle, coiVector3* result);
//Ogre::Node::setInheritOrientation(bool)
DLL void node_set_inherit_orientation(NodeHandle handle, int inherit);
//Ogre::Node::getInheritOrientation() const
DLL int node_get_inherit_orientation(NodeHandle handle);
//Ogre::Node::resetOrientation()
DLL void node_reset_orientation(NodeHandle handle);
//Ogre::Node::setInheritScale(bool)
DLL void node_set_inherit_scale(NodeHandle handle, int inherit);
//Ogre::Node::getInheritScale() const
DLL int node_get_inherit_scale(NodeHandle handle);
//Ogre::Node::scale(Ogre::Vector3 const&)
DLL void node_scale(NodeHandle handle, const coiVector3* scale);
//Ogre::Node::scale(Ogre::Vector3 const&)
DLL void node_scale_xyz(NodeHandle handle, const float x, const float y, const float z);
//Ogre::Node::translate(Ogre::Vector3 const&, Ogre::Node::TransformSpace)
DLL void node_translate(NodeHandle handle, const coiVector3* d, transform_space relative_to);
//Ogre::Node::translate(Ogre::Vector3 const&, Ogre::Node::TransformSpace)
DLL void node_translate_xyz(NodeHandle handle, const float x, const float y, const float z, transform_space relative_to);
//Ogre::Node::translate(Ogre::Matrix3 const&, float, float, float, Ogre::Node::TransformSpace)
//Ogre::Node::translate(Ogre::Matrix3 const&, Ogre::Vector3 const&, Ogre::Node::TransformSpace)
DLL void node_translate_m(NodeHandle handle, const coiMatrix3* axes, const coiVector3* move, transform_space relative_to);
//Ogre::Node::roll(Ogre::Radian const&, Ogre::Node::TransformSpace)
DLL void node_roll(NodeHandle handle, const coiReal angle, transform_space relative_to);
//Ogre::Node::pitch(Ogre::Radian const&, Ogre::Node::TransformSpace)
DLL void node_pitch(NodeHandle handle, const coiReal angle, transform_space relative_to);
// Ogre::Node::yaw(Ogre::Radian const&, Ogre::Node::TransformSpace)
DLL void node_yaw(NodeHandle handle, const coiReal angle, transform_space relative_to);
//Ogre::Node::rotate(Ogre::Vector3 const&, Ogre::Radian const&, Ogre::Node::TransformSpace)
DLL void node_rotate(NodeHandle handle, const coiVector3* axis, const coiReal angle, transform_space relative_to);
//Ogre::Node::rotate(Ogre::Quaternion const&, Ogre::Node::TransformSpace)
DLL void node_rotate_q(NodeHandle handle, const coiQuaternion* q, transform_space relative_to);
//Ogre::Node::getLocalAxes() const
DLL void node_get_local_axes(NodeHandle handle, coiMatrix3* result);
//Ogre::Node::createChild(Ogre::Vector3 const&, Ogre::Quaternion const&)
DLL NodeHandle node_create_child(NodeHandle handle, const coiVector3* translate, const coiQuaternion* rotate);
//Ogre::Node::createChild(std::string const&, Ogre::Vector3 const&, Ogre::Quaternion const&)
DLL NodeHandle node_create_named_child(NodeHandle handle, const char* name, const coiVector3* translate, const coiQuaternion* rotate);
//Ogre::Node::addChild(Ogre::Node*)
DLL void node_add_child(NodeHandle handle, NodeHandle child);
//Ogre::Node::numChildren() const
DLL unsigned short node_num_children(const NodeHandle handle);
//Ogre::Node::getChild(unsigned short) const
DLL NodeHandle node_get_child_by_index(const NodeHandle handle, unsigned short index);
//Ogre::Node::getChild(std::string const&) const
DLL NodeHandle node_get_child_by_name(const NodeHandle handle, const char* name);
//Ogre::Node::removeChild(unsigned short)
DLL NodeHandle node_remove_child_by_index(NodeHandle handle, unsigned short index);
//Ogre::Node::removeChild(Ogre::Node*)
DLL NodeHandle node_remove_child(NodeHandle handle, NodeHandle child);
//Ogre::Node::removeChild(std::string const&)
DLL NodeHandle node_remove_child_by_name(NodeHandle handle, const char* name);
//Ogre::Node::removeAllChildren()
DLL void node_remove_all_children(NodeHandle handle);
//Ogre::Node::_setDerivedPosition(Ogre::Vector3 const&)
DLL void node__set_derived_position(NodeHandle handle, const coiVector3* position);
//Ogre::Node::_setDerivedOrientation(Ogre::Quaternion const&)
DLL void node__set_derived_orientation(NodeHandle handle, const coiQuaternion* orientation);
//Ogre::Node::_getDerivedOrientation() const
DLL void node__get_derived_orientation(const NodeHandle handle, coiQuaternion* orientation);
//Ogre::Node::_getDerivedPosition() const
DLL void node__get_derived_position(const NodeHandle handle, coiVector3* position);
//Ogre::Node::_getDerivedScale() const
DLL void node__get_derived_scale(const NodeHandle handle, coiVector3* scale);
