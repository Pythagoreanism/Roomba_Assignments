#ifndef WORLD_H
#define WORLD_H
#include "point.h"

class World {
private:
	Point coinLocation[3];

public:
	void setCoinLocation(int, int, int);
	int getCoinLocationX(int) const;
	int getCoinLocationY(int) const;

	void print() const;

	World();

	~World();

};

#endif // WORLD_H