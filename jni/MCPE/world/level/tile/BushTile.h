#pragma once

#include <string>

#include "Tile.h"

class BushTile : public Tile {
public:
	Bush(int, const std::string&, const Material*);

	virtual bool mayPlace(TileSource*, int, int, int);
	virtual bool mayPlace(TileSource*, int, int, int, FacingID);
	virtual void neighborChanged(TileSource*, int, int, int, int, int, int);
	virtual void tick(TileSource*, int, int, int, Random*);
	virtual bool canSurvive(TileSource*, int, int, int);
	virtual const AABB& getAABB(TileSource*, int, int, int, AABB&, int, bool, int);
	void growCrops(TileSource*, int, int, int);

protected:
	virtual bool mayPlaceOn(int);
	virtual void checkAlive(TileSource*, int, int, int);
};