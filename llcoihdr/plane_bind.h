#pragma once

#include "ogre_interface.h"

// Plane
DLL PlaneHandle plane_create_plane();
DLL PlaneHandle plane_create_plane_normal(float x, float y, float z, float distance);
DLL void plane_destroy_plane(PlaneHandle handle);
DLL void plane_get_normal(PlaneHandle handle, coiVector3* normal);
DLL void plane_set_normal(PlaneHandle handle, const coiVector3* normal);
DLL coiReal plane_get_d(PlaneHandle handle);
DLL void plane_set_d(PlaneHandle handle, coiReal d);

// PlaneList (typedef vector<Plane>::type PlaneList)
DLL PlaneListHandle create_planelist();
DLL void destroy_planelist(PlaneListHandle handle);
