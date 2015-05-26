#pragma once

#include "MCPE/world/level/tile/CropTile.h"

class PepperTile : public CropTile {
public:
	PepperTile(int id) : CropTile(id, "wheat") {}
};