#pragma once

#include "ogre_interface.h"

DLL void add_window_listener(RenderWindowHandle window_handle, WindowListenerEvent window_event);

DLL void remove_window_listener(RenderWindowHandle window_handle);

DLL void pump_messages();
