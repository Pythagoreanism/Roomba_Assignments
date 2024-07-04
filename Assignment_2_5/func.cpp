#include "func.h"
#include <iostream>

bool findCoin(World& world, const Robot& robot, int numOfMoves) {
	for (unsigned int i = 0; i <= 2; i++) {
		if ((world.getCoinLocationX(i) == robot.getLocationX()) &&
			(world.getCoinLocationY(i) == robot.getLocationY())) {
			std::cout << "Robot found a coin at (" << robot.getLocationX()
				<< ", " << robot.getLocationY() << ") in " << numOfMoves
				<< " moves!" << std::endl;
			world.setCoinLocation(i, -1, -1);
			return true;
		}
	}

	return false;
}

bool allCoinsFound(const World& world) {

	for (unsigned int i = 0; i < 3; i++) {
		if ((world.getCoinLocationX(i) != -1) &&
			(world.getCoinLocationY(i) != -1)) {
			return false;
		}
	}

	return true;
}