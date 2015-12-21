/*
 * GStreamer - Unity3D bridge.
 * (C) 2015 i2CAT
 */

#ifndef __GUB_H__
#define __GUB_H__

#if _WIN32
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API
#endif

void gub_copy_texture(const char *data, int w, int h, void *_TextureNativePtr);
void gub_log(const char *format, ...);

#endif