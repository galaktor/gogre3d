#pragma once

#include "ogre_interface.h"

DLL RayHandle create_ray(const coiVector3* origin, const coiVector3* direction);
DLL void destroy_ray(RayHandle handle);
//Ray::setOrigin
DLL void ray_set_origin(RayHandle handle, const coiVector3* origin);
//Ray::getOrigin
DLL void ray_get_origin(RayHandle handle, coiVector3* origin);
//Ray::setDirection
DLL void ray_set_direction(RayHandle handle, const coiVector3* direction);
//Ray::getDirection
DLL void ray_get_direction(RayHandle handle, coiVector3* direction);
//Ray::getPoint
DLL void ray_get_point(RayHandle handle, coiReal units, coiVector3* point);
//Ray::intersects(Plane)
DLL void ray_intersects_plane(RayHandle handle, PlaneHandle plane_handle, ray_pair* result);
//Ray::intersects(AxisAlignedBox)
DLL void ray_intersects_axisalignedbox(RayHandle handle, AxisAlignedBoxHandle query_handle, ray_pair* result);
//Ray::intersects(Sphere)
DLL void ray_intersects_sphere(RayHandle handle, SphereHandle query_handle, ray_pair* result);
