#include "world.h"
#include <iostream>

void  World::setCoinLocation(int i, int x, int y) { coinLocation[i].setXY(x, y); }

void World::print() const {
	for (unsigned int i = 0; i < 3; i++) {
		std::cout << "Coin " << i + 1 << ": (" << coinLocation[i].getX() <<
			", " << coinLocation[i].getY() << ")" << std::endl;
	}
}

 World::World() {
	std::cout << "Creating world..." << std::endl;
	for (unsigned i = 0; i < 3; i++) {
		coinLocation[i].setXY(0, 0);
	}
}

 World::~World() { std::cout << "Destorying world" << std::endl; }