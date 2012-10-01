#pragma once

#include "ogre_interface.h"

//~OverlayContainer();
DLL void destroy_overlaycontainer(OverlayContainerHandle handle);
// overlaycontainer_
//void addChild(OverlayElement* elem);
DLL void overlaycontainer_add_child(OverlayContainerHandle handle, OverlayElementHandle child_handle);
//void addChildImpl(OverlayElement* elem);
DLL void overlaycontainer_add_child_impl(OverlayContainerHandle handle, OverlayElementHandle child_handle);
//void addChildImpl(OverlayContainer* cont);
DLL void overlaycontainer_add_child_container_impl(OverlayContainerHandle handle, OverlayContainerHandle child_handle);
//void removeChild(const String& name);
DLL void overlaycontainer_remove_child(OverlayContainerHandle handle, const char* name);
//OverlayElement* getChild(const String& name);
DLL OverlayElementHandle overlaycontainer_get_child(OverlayContainerHandle handle, const char* name);
//void initialise(void);
DLL void overlaycontainer_initialise(OverlayContainerHandle handle);
//void _addChild(OverlayElement* elem);
DLL void overlaycontainer__add_child(OverlayContainerHandle handle, OverlayElementHandle elem);
//void _removeChild(OverlayElement* elem);
DLL void overlaycontainer__remove_child(OverlayContainerHandle handle, OverlayElementHandle elem);
//void _removeChild(const String& name);
DLL void overlaycontainer__remove_child_by_name(OverlayContainerHandle handle, const char* name);
//TODO: ChildIterator getChildIterator(void);
//TODO: ChildContainerIterator getChildContainerIterator(void);
//void _positionsOutOfDate(void);
DLL void overlaycontainer__positions_out_of_date(OverlayContainerHandle handle);
//void _update(void);
DLL void overlaycontainer__update(OverlayContainerHandle handle);
//ushort _notifyZOrder(ushort newZOrder);
DLL unsigned short overlaycontainer__notify_zorder(OverlayContainerHandle handle, unsigned short new_zorder);
//void _notifyViewport();
DLL void overlaycontainer__notify_viewport(OverlayContainerHandle handle);
//void _notifyWorldTransforms(const Matrix4& xform);
DLL void overlaycontainer__notify_world_transforms(OverlayContainerHandle handle, const coiMatrix4* xform);
//void _notifyParent(OverlayContainer* parent, Overlay* overlay);
DLL void overlaycontainer__notify_parent(OverlayContainerHandle handle, OverlayContainerHandle parent_handle, OverlayHandle overlay_handle);
// TODO: void _updateRenderQueue(RenderQueue* queue);
//bool isContainer() const;
DLL int overlaycontainer_is_container(OverlayContainerHandle handle);
//bool isChildrenProcessEvents() const;
DLL int overlaycontainer_is_children_process_events(OverlayContainerHandle handle);
//void setChildrenProcessEvents(bool val);
DLL void overlaycontainer_set_children_process_events(OverlayContainerHandle handle, int val);
//OverlayElement* findElementAt(Real x, Real y);
DLL OverlayElementHandle overlaycontainer_find_element_at(OverlayContainerHandle handle, coiReal x, coiReal y);
//void copyFromTemplate(OverlayElement* templateOverlay);
DLL void overlaycontainer_copy_from_template(OverlayContainerHandle handle, OverlayElementHandle template_overlay);
//virtual OverlayElement* clone(const String& instanceName);
DLL OverlayElementHandle overlaycontainer_clone(OverlayContainerHandle handle, const char* instance_name);
