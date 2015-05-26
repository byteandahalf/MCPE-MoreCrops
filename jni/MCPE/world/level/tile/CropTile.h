#pragma once

#include <string>

#include "BushTile.h"

class Item;

class CropTile : public BushTile {
public:
	CropTile(int, const std::string&);

	virtual bool mayPlaceOn(int);
	virtual void tick(TileSource*, int, int, int, Random*);
	virtual const TextureUVCoordinateSet& getTexture(TileSource*, int, int, int, FacingID);
	virtual const TextureUVCoordinateSet& getTexture(FacingID, int);
	virtual void spawnResources(TileSource*, int, int, int, int, float);
	virtual int getResource(int, Random*);
	virtual int getResourceCount(Random*);
	void growCropsToMax(TileSource*, int, int, int);

private:
	float getGrowthSpeed(TileSource*, int, int, int);
	virtual bool onFertilized(TileSource*, int, int, int);

protected:
	virtual Item* getBaseSeed();
	virtual int getBasePlantId();

	TextureAtlasTextureItem _uvWheet; // TODO: Add this
};