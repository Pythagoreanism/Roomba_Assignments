#include "world.h"
#include <iostream>

void World::setCoinLocation(int i, int x, int y) { coinLocation[i].setXY(x, y); }
int World::getCoinLocationX(int i) const { return coinLocation[i].getX(); }
int World::getCoinLocationY(int i) const { return coinLocation[i].getY(); }

void World::print() const {
	for (unsigned int i = 0; i < 3; i++) {
		std::cout << "Coin " << i + 1 << ": (" << coinLocation[i].getX() <<
			", " << coinLocation[i].getY() << ")" << std::endl;
	}
}

 World::World() {
	std::cout << "Creating world..." << std::endl;
	for (unsigned i = 0; i < 3; i++) {
		coinLocation[i].setXY((rand() % 9) + 1, (rand() % 9) + 1);
	}
}

 World::~World() { std::cout << "Destorying world" << std::endl; }