#pragma once

#include "ogre_interface.h"

// Ogre::AxisAlignedBox
DLL AxisAlignedBoxHandle create_axis_aligned_box();
DLL AxisAlignedBoxHandle create_axis_aligned_box_ex(Extent e);
DLL AxisAlignedBoxHandle create_axis_aligned_box_v3(const coiVector3* min, const coiVector3* max);
DLL void destroy_axis_aligned_box(AxisAlignedBoxHandle handle);
DLL void axisalignedbox_get_size(AxisAlignedBoxHandle handle, coiVector3* size);
DLL void axisalignedbox_get_minimum(AxisAlignedBoxHandle handle, coiVector3* minimum);
DLL void axisalignedbox_get_maximum(AxisAlignedBoxHandle handle, coiVector3* maximum);
DLL void axisalignedbox_set_minimum_x(AxisAlignedBoxHandle handle, coiReal x);
DLL void axisalignedbox_set_minimum_y(AxisAlignedBoxHandle handle, coiReal y);
DLL void axisalignedbox_set_minimum_z(AxisAlignedBoxHandle handle, coiReal z);
DLL void axisalignedbox_set_minimum(AxisAlignedBoxHandle handle, const coiVector3* min);
DLL void axisalignedbox_set_maximum(AxisAlignedBoxHandle handle, const coiVector3* max);
DLL void axisalignedbox_set_maximum_x(AxisAlignedBoxHandle handle, coiReal x);
DLL void axisalignedbox_set_maximum_y(AxisAlignedBoxHandle handle, coiReal y);
DLL void axisalignedbox_set_maximum_z(AxisAlignedBoxHandle handle, coiReal z);
DLL void axisalignedbox_set_extents(AxisAlignedBoxHandle handle, const coiVector3* min, const coiVector3* max);
DLL void axisalignedbox_get_corner(AxisAlignedBoxHandle handle, CornerEnum e, coiVector3* corner);
