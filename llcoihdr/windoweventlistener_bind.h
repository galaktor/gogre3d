#pragma once

#include "ogre_interface.h"

DLL void add_window_listener(RenderWindowHandle window_handle, WindowListenerEvent window_event);

DLL void remove_window_listener(RenderWindowHandle window_handle);

DLL WindowListenerHandle add_window_listener_ctx(RenderWindowHandle window_handle, WindowListenerEvent window_event, void* userdata);

DLL void remove_window_listener_ctx(RenderWindowHandle window_handle, WindowListenerHandle listener_handle);

DLL void pump_messages();
