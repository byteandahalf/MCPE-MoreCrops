#include "CropsMod.h"

#include "world/world/level/tile/PepperTile.h"
#include "MCPE/world/item/TileItem.h"

Tile* CropsMod::PepperTile = NULL;

void CropsMod::registerCustomTiles() {
	PepperTile = new PepperTile(PepperTile::_id);


	registerTileItems();
}

void CropsMod::registerTileItems() {
	for(int i = 0; i < 256; i++) {
		if(!Item::items[i]) Item::items[i] = new TileItem(i - 256);
	}
}