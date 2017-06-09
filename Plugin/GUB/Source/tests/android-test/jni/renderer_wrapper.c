#include "testGUB-Android.h"
#include <jni.h>

#define UNUSED(x) (void)(x)

/* These functions are called from Java. */

JNIEXPORT void JNICALL Java_com_testgub_RendererWrapper_set_1gst_1pipeline_1env(JNIEnv * env, jclass cls) {
  UNUSED(env);
  UNUSED(cls);
  set_gst_pipeline_env();
}

JNIEXPORT void JNICALL Java_com_testgub_RendererWrapper_on_1surface_1created(JNIEnv * env, jclass cls) {
  UNUSED(env);
  UNUSED(cls);
  on_surface_created();
}

JNIEXPORT void JNICALL Java_com_testgub_RendererWrapper_on_1surface_1changed(JNIEnv * env, jclass cls, jint width, jint height) {
  UNUSED(env);
  UNUSED(cls);
  on_surface_changed(width, height);
}

JNIEXPORT void JNICALL Java_com_testgub_RendererWrapper_on_1draw_1frame(JNIEnv* env, jclass cls) {
  UNUSED(env);
  UNUSED(cls);
  on_draw_frame();
}
