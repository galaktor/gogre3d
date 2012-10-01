#pragma once

#include "ogre_interface.h"

// Light
DLL LightHandle create_light(const char* light_name);
DLL void destroy_light(LightHandle handle);
//Ogre::Light::setPosition() const
DLL void light_set_position(LightHandle light_handle, const float x, const float y, const float z);
//Ogre::Light::getPosition() const
DLL void light_get_position(LightHandle handle, coiVector3* pos);
//Ogre::Light::getPosition() const
DLL void light_get_position_xyz(LightHandle handle, float* x, float* y, float* z);
//Ogre::Light::setDirection(float, float, float)
DLL void light_set_direction_xyz(LightHandle handle, const float x, const float y, const float z);
//Ogre::Light::setDirection(Ogre::Vector3 const&)
DLL void light_set_direction(LightHandle handle, const coiVector3* direction);
//Ogre::Light::getDirection() const
DLL void light_get_direction(LightHandle handle, coiVector3* direction);
//Ogre::Light::setSpotlightRange(Ogre::Radian const&, Ogre::Radian const&, float)
DLL void light_set_spotlight_range(LightHandle handle, const coiReal inner_angle, const coiReal outer_angle, coiReal fall_off);
DLL void light_set_type(LightHandle handle, light_types type);
DLL void light_set_diffuse_colour(LightHandle handle, const coiColourValue* colour);
DLL void light_set_specular_colour(LightHandle handle, const coiColourValue* colour);
