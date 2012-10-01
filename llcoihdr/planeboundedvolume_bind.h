#pragma once

#include "ogre_interface.h"
// TODO: remove these includes
#include "plane_bind.h"
#include "ray_bind.h"

DLL PlaneBoundedVolumeHandle create_planeboundedvolume(plane_side the_outside);
DLL void destroy_planeboundedvolume(PlaneBoundedVolumeHandle handle);
// bool intersects(const AxisAlignedBox&) const
DLL int planeboundedvolume_intersects_axisalignedbox(PlaneBoundedVolumeHandle handle, AxisAlignedBoxHandle query);
// bool intersects(const Sphere&) const
DLL int planeboundedvolume_intersects_sphere(PlaneBoundedVolumeHandle handle, SphereHandle query);
// std::pair<bool, Real> intersects(const Ray&) const
DLL void planeboundedvolume_intersects_ray(PlaneBoundedVolumeHandle handle, RayHandle query, ray_pair* result);
