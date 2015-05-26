#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>

#include "substrate.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "morecrops", __VA_ARGS__))



JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	LOGI("This is a more crops mod for MCPE!");

	return JNI_VERSION_1_2;
}
