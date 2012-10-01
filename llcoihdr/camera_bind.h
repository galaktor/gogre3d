#pragma once

#include "ogre_interface.h"

DLL CameraHandle create_camera(const char* camera_name);

DLL void camera_set_polygon_mode(CameraHandle handle, polygon_mode sd);

DLL polygon_mode camera_get_polygon_mode(const CameraHandle handle);

DLL void camera_move(CameraHandle handle, const float x, const float y, const float z);

DLL void camera_move_relative(CameraHandle handle, const float x, const float y, const float z);

DLL void camera_set_direction(CameraHandle handle, const float x, const float y, const float z);

DLL void camera_get_direction(CameraHandle handle, coiVector3* v3);

DLL void camera_get_up(CameraHandle handle, coiVector3* up);

DLL void camera_get_right(CameraHandle handle, coiVector3* right);

DLL void camera_set_near_clip_distance(CameraHandle camera_handle, float d);

DLL void camera_set_far_clip_distance(CameraHandle camera_handle, float d);

DLL void camera_set_aspect_ratio(CameraHandle camera_handle, float w, float h);

DLL void camera_set_aspect_ratio_ex(CameraHandle handle, float ratio);

DLL float camera_get_aspect_ratio(CameraHandle handle);

DLL void camera_set_auto_aspect_ratio(CameraHandle camera_handle, int on);

DLL void camera_set_fovy(CameraHandle camera_handle, float angle);

DLL void camera_set_frustum_offset(CameraHandle camera_handle, const int offset_x, const int offset_y);

DLL void camera_set_focal_length(CameraHandle camera_handle, float fl);

DLL void camera_set_position(CameraHandle camera_handle, const float x, const float y, const float z);

DLL void camera_get_position(CameraHandle handle, coiVector3* result);

DLL void camera_lookat(CameraHandle camera_handle, const float x, const float y, const float z);

DLL void camera_roll(CameraHandle handle, coiReal angle);

DLL void camera_yaw(CameraHandle handle, coiReal angle);

DLL void camera_pitch(CameraHandle handle, coiReal angle);

DLL void camera_rotate(CameraHandle handle, const coiVector3* axis, coiReal angle);

DLL void camera_rotate_q(CameraHandle handle, const coiQuaternion* q);

DLL void camera_set_fixed_yaw_axis(CameraHandle handle, int on, const coiVector3* fixed_axis);

DLL void camera_get_orientation(CameraHandle handle, coiQuaternion* orientation);

DLL void camera_set_orientation(CameraHandle handle, const coiQuaternion* orientation);

DLL void camera_get_derived_orientation(CameraHandle handle, coiQuaternion* orientation);

DLL void camera_get_derived_position(CameraHandle handle, coiVector3* position);

DLL void camera_get_derived_direction(CameraHandle handle, coiVector3* direction);

DLL void camera_get_derived_up(CameraHandle handle, coiVector3* up);

DLL void camera_get_derived_right(CameraHandle handle, coiVector3* right);

DLL void camera_set_autotracking(CameraHandle handle, int on, SceneNodeHandle sn_handle, const coiVector3* offset);

DLL void camera_set_lod_bias(CameraHandle handle, coiReal factor);

DLL coiReal camera_get_lod_bias(CameraHandle handle);

DLL void camera_get_camera_to_viewport_ray(CameraHandle handle, coiReal screenx, coiReal screeny, RayHandle ray);

DLL void camera_set_window(CameraHandle handle, coiReal left, coiReal top, coiReal right, coiReal bottom);

DLL SceneManagerHandle camera_get_scenemanager(CameraHandle handle);
