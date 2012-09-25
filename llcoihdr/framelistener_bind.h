#pragma once

#include "ogre_interface.h"


DLL void add_frame_listener(RootHandle root_handle, FrameListenerEvent frame_event,int frame_event_type);

DLL void remove_frame_listener(RootHandle root_handle, FrameListenerEvent frame_event);
