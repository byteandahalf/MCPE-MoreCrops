#pragma once

class Tile;

class CropsMod {
public:

	static Tile* PepperTile;

	static void registerCustomTiles();
	static void registerCustomItems() {}
	static void registerCustomTileEntities() {}
};