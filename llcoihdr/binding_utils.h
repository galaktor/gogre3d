#pragma once

// TODO: can we do without this somehow??

#include "ogre_interface.h"      // as we can't forward declare enums. ):
#include "ois_interface.h"       // ditto

#include <OgreCommon.h>         // Oodles of enums.
#include <OgreLog.h>            // LogMessageLevel and LoggingLevel
#include <OgreBlendMode.h>      // SceneBlendType, SceneBlendFactor, LayerBlendType
#include <OgreSceneQuery.h>     // SceneQuery::WorldFragmentType
#include <OgreHardwareBuffer.h> // HardwareBuffer::Usage
#include <OgreFrustum.h>        // Ogre::OrientationMode
#include <OgreOverlayElement.h> // GuiVerticalAlignment, GuiMetricsMode, GuiHorizontalAlignment
#include <OgreTextAreaOverlayElement.h> // TextAreaOverlayElement::Alignment
#include <OgreRenderOperation.h> // RenderOperation::OperationType
#include <OgreLight.h>          // Light::LightTypes
#include <OgreNode.h>           // Node::TransformSpace
#include <OgreResource.h>       // Resource::LoadingState
#include <OgreSkeleton.h>       // SkeletonAnimationBlendMode


/* OGRE data <-> LLCOI data converters */
void ogre_matrix3_to_llcoi_matrix3(const Ogre::Matrix3& o, coiMatrix3& l);
void llcoi_matrix3_to_ogre_matrix3(const coiMatrix3& l, Ogre::Matrix3& o);

void ogre_matrix4_to_llcoi_matrix4(const Ogre::Matrix4& o, coiMatrix4& l);
void llcoi_matrix4_to_ogre_matrix4(const coiMatrix4& l, Ogre::Matrix4& o);


/* OGRE enum <-> LLCOI enum converters */
log_message_level ogre_lml_to_llcoi_lml(Ogre::LogMessageLevel lml);
Ogre::LogMessageLevel llcoi_lml_to_ogre_lml(log_message_level lml);

hardware_buffer_usage ogre_hbu_to_llcoi_hbu(Ogre::HardwareBuffer::Usage ogre_hbu);
Ogre::HardwareBuffer::Usage llcoi_hbu_to_ogre_hbu(hardware_buffer_usage llcoi_hbu);

// Ogre::Light
light_types ogre_light_type_to_llcoi_light_type(Ogre::Light::LightTypes type);
Ogre::Light::LightTypes llcoi_light_types_to_ogre_light_types(light_types type);

size_t ogre_light_list_to_llcoi(Ogre::LightList& l, const LightHandle c_vector);
size_t ogre_light_list_to_llcoi(Ogre::LightList& l, LightHandle c_vector);


Ogre::Node::TransformSpace llcoi_ts_to_ogre_ts(transform_space llcoi_ts);
transform_space ogre_ts_to_llcoi_ts(Ogre::Node::TransformSpace ogre_ts);

Ogre::Plane::Side llcoi_plane_side_to_ogre_plane_side(plane_side side);
plane_side ogre_plane_side_to_llcoi_plane_side(Ogre::Plane::Side side);

logging_level ogre_ll_to_llcoi_ll(Ogre::LoggingLevel ll);
Ogre::LoggingLevel llcoi_ll_to_ogre_ll(logging_level ll);

Ogre::AxisAlignedBox::Extent llcoi_extent_to_ogre_extent(Extent e);
Extent ogre_extent_to_llcoi_extent(Ogre::AxisAlignedBox::Extent e);

Ogre::AxisAlignedBox::CornerEnum llcoi_cornerenum_to_ogre_cornerenum(CornerEnum e);
CornerEnum ogre_cornerenum_to_llcoi_cornerenum(Ogre::AxisAlignedBox::CornerEnum e);

Ogre::SceneQuery::WorldFragmentType llcoi_wft_to_ogre_wft(world_fragment_type wft);
world_fragment_type ogre_wft_to_llcoi_wft(Ogre::SceneQuery::WorldFragmentType wft);

// from OgreFrustum.h
Ogre::OrientationMode llcoi_orientation_mode_to_ogre_orientation_mode(orientation_mode mode);
orientation_mode ogre_orientation_mode_to_llcoi_orientation_mode(Ogre::OrientationMode mode);

Ogre::ProjectionType llcoi_projection_type_to_ogre_projection_type(projection_type type);
projection_type ogre_projection_type_to_llcoi_projection_type(Ogre::ProjectionType type);

Ogre::FrustumPlane llcoi_frustum_plane_to_ogre_frustum_plane(frustum_plane plane);
frustum_plane ogre_frustum_plane_to_llcoi_frustum_plane(Ogre::FrustumPlane plane);

// from OgreOverlayElement.h
Ogre::GuiMetricsMode llcoi_gui_metrics_mode_to_ogre_gui_metrics_mode(gui_metrics_mode gmm);
gui_metrics_mode ogre_gui_metrics_mode_to_llcoi_metrics_mode(Ogre::GuiMetricsMode gmm);

Ogre::GuiHorizontalAlignment llcoi_gui_horizontal_alignment_to_ogre_gui_horizontal_alignment(gui_horizontal_alignment gha);
gui_horizontal_alignment ogre_gui_horizontal_alignment_to_llcoi_gui_horizontal_alignment(Ogre::GuiHorizontalAlignment gha);

Ogre::GuiVerticalAlignment llcoi_gui_vertical_alignment_to_ogre_gui_vertical_alignment(gui_vertical_alignment gva);
gui_vertical_alignment ogre_gui_vertical_alignment_to_llcoi_gui_vertical_alignment(Ogre::GuiVerticalAlignment gva);

Ogre::TextAreaOverlayElement::Alignment llcoi_textarea_alignment_to_ogre_textarea_alignment(textarea_overlayelement_alignment align);
textarea_overlayelement_alignment ogre_textarea_alignment_to_llcoi_textarea_alignment(Ogre::TextAreaOverlayElement::Alignment align);

// from OgreSkeleton.h
Ogre::SkeletonAnimationBlendMode llcoi_skeleton_blend_mode_to_ogre(skeleton_animation_blend_mode mode);
skeleton_animation_blend_mode ogre_skeleton_blend_mode_to_llcoi(Ogre::SkeletonAnimationBlendMode mode);

// OgreRenderOperation.h
Ogre::RenderOperation::OperationType llcoi_operation_type_to_ogre(operation_type op_type);
operation_type ogre_operation_type_to_llcoi(Ogre::RenderOperation::OperationType op_type);

// OgreResource.h
Ogre::Resource::LoadingState llcoi_loading_state_to_ogre(loading_state state);
loading_state ogre_loading_state_to_llcoi(Ogre::Resource::LoadingState state);

// OgreBlendMode.h
Ogre::SceneBlendType enum_converter(scene_blend_type arg);
scene_blend_type enum_converter(Ogre::SceneBlendType arg);

Ogre::LayerBlendType enum_converter(layer_blend_type arg);
layer_blend_type enum_converter(Ogre::LayerBlendType arg);

Ogre::SceneBlendFactor enum_converter(scene_blend_factor arg);
scene_blend_factor enum_converter(Ogre::SceneBlendFactor arg);

Ogre::LayerBlendOperation enum_converter(layer_blend_operation arg);
layer_blend_operation enum_converter(Ogre::LayerBlendOperation arg);

// OgreCommon.h
Ogre::CompareFunction enum_converter(compare_function func);
compare_function enum_converter(Ogre::CompareFunction func);

Ogre::TextureFilterOptions enum_converter(texture_filter_options opts);
texture_filter_options enum_converter(Ogre::TextureFilterOptions opts);

Ogre::CullingMode enum_converter(culling_mode arg);
culling_mode enum_converter(Ogre::CullingMode arg);

Ogre::ManualCullingMode enum_converter(manual_culling_mode arg);
manual_culling_mode enum_converter(Ogre::ManualCullingMode arg);

Ogre::FilterType enum_converter(filter_type ftype);
filter_type enum_converter(Ogre::FilterType ftype);

Ogre::FilterOptions enum_converter(filter_options opts);
filter_options enum_converter(Ogre::FilterOptions opts);

Ogre::ShadeOptions enum_converter(shade_options arg);
shade_options enum_converter(Ogre::ShadeOptions arg);

Ogre::FogMode enum_converter(fog_mode arg);
fog_mode enum_converter(Ogre::FogMode arg);

Ogre::PolygonMode enum_converter(polygon_mode arg);
polygon_mode enum_converter(Ogre::PolygonMode arg);



/* OIS MouseState <-> LLCOI MouseState converters */

#include <OISMouse.h>           // OIS::MouseButtonID
typedef struct _MouseEvent MouseEvent;
namespace OIS
{
    class MouseEvent;
};

void ois_mouse_event_to_llcoi_mouse_state(const OIS::MouseEvent* ois_mouse_event, MouseState* llcoi_mouse_state);
MouseButtonID ois_mbid_to_llcoi_mbid(OIS::MouseButtonID id);
