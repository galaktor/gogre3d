#pragma once

#include "ois_interface.h"

DLL MouseListenerHandle mouse_set_event_callback(MouseInputHandle handle, MouseMovedEvent moved, MousePressedEvent pressed, MouseReleasedEvent released, void* userdata);

DLL void mouse_remove_event_callback(MouseInputHandle mouse_handle, MouseListenerHandle handle);

DLL MouseState mouse_get_state(MouseInputHandle mouse_handle);

DLL void mouse_set_buffered(MouseInputHandle mouse_handle, int buffered);

DLL void mouse_capture(MouseInputHandle mouse_handle);
