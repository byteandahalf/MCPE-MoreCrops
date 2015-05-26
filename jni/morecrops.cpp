#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>

#include "substrate.h"

#include "MCPE/world/level/tile/Tile.h"
#include "CropsMod/CropsMod.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "morecrops", __VA_ARGS__))


void (*_Tile$initTiles)();
void Tile$initTiles() {
	_Tile$initTiles();

	CropsMod::registerCustomTiles();
}



JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	MSHookFunction((void*) &Tile::initTiles, (void*) &Tile$initTiles, (void**) &_Tile$initTiles);

	return JNI_VERSION_1_2;
}
