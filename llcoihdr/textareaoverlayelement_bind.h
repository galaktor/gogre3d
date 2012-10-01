#pragma once

#include "ogre_interface.h"

//TextAreaOverlayElement(const String& name);
DLL TextAreaOverlayElementHandle create_textareaoverlayelement(const char* name);
//~TextAreaOverlayElement();
DLL void destroy_textareaoverlayelement(TextAreaOverlayElementHandle handle);
//void initialise(void);
DLL void textareaoverlayelement_initialise(TextAreaOverlayElementHandle handle);
//void setCaption(const DisplayString& text);
DLL void textareaoverlayelement_set_caption(TextAreaOverlayElementHandle handle, const char* text);
//void setCharHeight( Real height );
DLL void textareaoverlayelement_set_char_height(TextAreaOverlayElementHandle handle, coiReal height);
//Real getCharHeight() const;
DLL coiReal textareaoverlayelement_get_char_height(const TextAreaOverlayElementHandle handle);
//void setSpaceWidth( Real width );
DLL void textareaoverlayelement_set_space_width(TextAreaOverlayElementHandle handle, coiReal width);
//Real getSpaceWidth() const;
DLL coiReal textareaoverlayelement_get_space_width(const TextAreaOverlayElementHandle handle);
//void setFontName( const String& font );
DLL void textareaoverlayelement_set_font_name(TextAreaOverlayElementHandle handle, const char* font);
//const String& getFontName() const;
DLL const char* textareaoverlayelement_get_font_name(const TextAreaOverlayElementHandle handle);
//const String& getTypeName(void) const;
DLL const char* textareaoverlayelement_get_type_name(const TextAreaOverlayElementHandle handle);
///TODO: const MaterialPtr& getMaterial(void) const;
///TODO: void getRenderOperation(RenderOperation& op);
//void setMaterialName(const String& matName);
DLL void textareaoverlayelement_set_material_name(TextAreaOverlayElementHandle handle, const char* mat_name);
//void setColour(const ColourValue& col);
DLL void textareaoverlayelement_set_colour(TextAreaOverlayElementHandle handle, const coiColourValue* col);
//const ColourValue& getColour(void) const;
DLL void textareaoverlayelement_get_colour(const TextAreaOverlayElementHandle handle, coiColourValue* result);
//void setColourBottom(const ColourValue& col);
DLL void textareaoverlayelement_set_colour_bottom(TextAreaOverlayElementHandle handle, const coiColourValue* col);
//const ColourValue& getColourBottom(void) const;
DLL void textareaoverlayelement_get_colour_bottom(const TextAreaOverlayElementHandle handle, coiColourValue* result);
//void setColourTop(const ColourValue& col);
DLL void textareaoverlayelement_set_colour_top(TextAreaOverlayElementHandle handle, const coiColourValue* col);
//const ColourValue& getColourTop(void) const;
DLL void textareaoverlayelement_get_colour_top(const TextAreaOverlayElementHandle handle, coiColourValue* result);
//void setAlignment( Alignment a );
DLL void textareaoverlayelement_set_alignment(TextAreaOverlayElementHandle handle, textarea_overlayelement_alignment a);
//Alignment getAlignment() const
DLL textarea_overlayelement_alignment textareaoverlayelement_get_alignment(const TextAreaOverlayElementHandle handle);
//void setMetricsMode(GuiMetricsMode gmm);
DLL void textareaoverlayelement_set_metrics_mode(TextAreaOverlayElementHandle handle, gui_metrics_mode gmm);
///void _update(void);
DLL void textareaoverlayelement__update(TextAreaOverlayElementHandle handle);
