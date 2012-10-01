#pragma once

#include "ogre_interface.h"

DLL void add_frame_listener(RootHandle root_handle, FrameListenerEvent frame_event,int frame_event_type);

DLL void remove_frame_listener(RootHandle root_handle, FrameListenerEvent frame_event);

DLL FrameListenerHandle add_frame_listener_ctx(FrameStarted started_cb, FrameQueued queued_cb, FrameEnded ended_cb, void* userdata);

DLL void remove_frame_listener_ctx(FrameListenerHandle handle);
