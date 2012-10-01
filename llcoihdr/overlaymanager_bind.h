#pragma once

#include "ogre_interface.h"

// overlaymanager_
//OverlayManager();
DLL OverlayManagerHandle create_overlaymanager();
//~OverlayManager();
DLL void destroy_overlaymanager(OverlayManagerHandle handle);
//TODO const StringVector& getScriptPatterns(void) const;
//TODO void parseScript(DataStreamPtr& stream, const String& groupName);
//Real getLoadingOrder(void) const;
DLL coiReal overlaymanager_get_loading_order(OverlayManagerHandle handle);
//Overlay* create(const String& name);
DLL OverlayHandle overlaymanager_create(OverlayManagerHandle handle, const char* name);
//Overlay* getByName(const String& name);
DLL OverlayHandle overlaymanager_get_by_name(OverlayManagerHandle handle, const char* name);
//void destroy(const String& name);
DLL void overlaymanager_destroy_by_name(OverlayManagerHandle handle, const char* name);
//void destroy(Overlay* overlay);
DLL void overlaymanager_destroy(OverlayManagerHandle handle, OverlayHandle overlay_handle);
//void destroyAll(void);
DLL void overlaymanager_destroy_all(OverlayManagerHandle handle);
//typedef MapIterator<OverlayMap> OverlayMapIterator;
//TODO OverlayMapIterator getOverlayIterator(void);
DLL void overlaymanager_list_overlays(OverlayManagerHandle handle);
//TODO void _queueOverlaysForRendering(Camera* cam, RenderQueue* pQueue, Viewport *vp);
//bool hasViewportChanged(void) const;
DLL int overlaymanager_has_viewport_changed(OverlayManagerHandle handle);
//int getViewportHeight(void) const;
DLL int overlaymanager_get_viewport_height(OverlayManagerHandle handle);
//int getViewportWidth(void) const;
DLL int overlaymanager_get_viewport_width(OverlayManagerHandle handle);
//Real getViewportAspectRatio(void) const;
DLL coiReal overlaymanager_get_viewport_aspect_ratio(OverlayManagerHandle handle);
//OrientationMode getViewportOrientationMode(void) const;
DLL orientation_mode overlaymanager_get_viewport_orientation_mode(OverlayManagerHandle handle);
//OverlayElement* createOverlayElement(const String& typeName, const String& instanceName, bool isTemplate = false);
DLL OverlayElementHandle overlaymanager_create_overlayelement(OverlayManagerHandle handle, const char* type_name, const char* instance_name, int is_template);
//OverlayElement* getOverlayElement(const String& name, bool isTemplate = false);
DLL OverlayElementHandle overlaymanager_get_overlayelement(OverlayManagerHandle handle, const char* name, int is_template);
//bool hasOverlayElement(const String& name, bool isTemplate = false);
DLL int overlaymanager_has_overlay_element(OverlayManagerHandle handle, const char* name, int is_template);
//void destroyOverlayElement(const String& instanceName, bool isTemplate = false);
DLL void overlaymanager_destroy_overlay_element(OverlayManagerHandle handle, const char* name, int is_template);
//void destroyOverlayElement(OverlayElement* pInstance, bool isTemplate = false);
DLL void overlaymanager_destroy_overlay_element_instance(OverlayManagerHandle handle, OverlayElementHandle instance, int is_template);
//void destroyAllOverlayElements(bool isTemplate = false);
DLL void overlaymanager_destroy_all_overlay_elements(OverlayManagerHandle handle);
//OverlayElement* createOverlayElementFromTemplate(const String& templateName, const String& typeName, const String& instanceName, bool isTemplate = false);
DLL OverlayElementHandle overlaymanager_create_overlayelement_from_template(OverlayManagerHandle handle, const char* template_name, const char* type_name, const char* instance_name, int is_template);
//OverlayElement* cloneOverlayElementFromTemplate(const String& templateName, const String& instanceName);
DLL OverlayElementHandle overlaymanager_clone_overlayelement_from_template(OverlayManagerHandle handle, const char* template_name, const char* instance_name);
//OverlayElement* createOverlayElementFromFactory(const String& typeName, const String& instanceName);
DLL OverlayElementHandle overlaymanager_create_overlayelement_from_factory(OverlayManagerHandle handle, const char* type_name, const char* instance_name);
//bool isTemplate (String strName) const
DLL int overlaymanager_is_template(OverlayManagerHandle handle, const char* name);
//static OverlayManager* getSingletonPtr(void);
DLL OverlayManagerHandle overlaymanager_get_singleton_ptr();
