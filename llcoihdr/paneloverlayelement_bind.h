#pragma once

#include "ogre_interface.h"

//PanelOverlayElement(const String& name);
DLL PanelOverlayElementHandle create_paneloverlayelement(const char* name);
//~PanelOverlayElement();
DLL void destroy_paneloverlayelement(PanelOverlayElementHandle handle);
//void initialise(void);
DLL void paneloverlayelement_initialise(PanelOverlayElementHandle handle);
//void setTiling(Real x, Real y, ushort layer = 0);
DLL void paneloverlayelement_set_tiling(PanelOverlayElementHandle handle, coiReal x, coiReal y, unsigned short layer);
//Real getTileX(ushort layer = 0) const;
DLL coiReal paneloverlayelement_get_tile_x(const PanelOverlayElementHandle handle, unsigned short layer);
//Real getTileY(ushort layer = 0) const;
DLL coiReal paneloverlayelement_get_tile_y(const PanelOverlayElementHandle handle, unsigned short layer);
//void setUV(Real u1, Real v1, Real u2, Real v2);
DLL void paneloverlayelement_set_uv(PanelOverlayElementHandle handle, coiReal u1, coiReal v1, coiReal u2, coiReal v2);
//void getUV(Real& u1, Real& v1, Real& u2, Real& v2) const;
DLL void paneloverlayelement_get_uv(const PanelOverlayElementHandle handle, coiReal* u1, coiReal* v1, coiReal* u2, coiReal* v2);
//void setTransparent(bool isTransparent);
DLL void paneloverlayelement_set_transparent(PanelOverlayElementHandle handle, int is_transparent);
//bool isTransparent(void) const;
DLL int paneloverlayelement_is_transparent(const PanelOverlayElementHandle handle);
//const String& getTypeName(void) const;
DLL const char* paneloverlayelement_get_type_name(const PanelOverlayElementHandle handle);
//void getRenderOperation(RenderOperation& op);
DLL void paneloverlayelement_get_renderoperation(PanelOverlayElementHandle handle, RenderOperationHandle renderOp);
//void setMaterialName(const String& matName);
DLL void paneloverlayelement_set_material_name(PanelOverlayElementHandle handle, const char* mat_name);
//TODO: void _updateRenderQueue(RenderQueue* queue);
