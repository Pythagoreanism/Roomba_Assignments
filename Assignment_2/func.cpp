#include "func.h"
#include <iostream>

bool findCoin(World& world, const Robot& robot) {
	for (unsigned int i = 0; i <= 2; i++) {
		if ((world.getCoinLocationX(i) == robot.getLocationX()) &&
			(world.getCoinLocationY(i) == robot.getLocationY())) {
			std::cout << "Robot found a coin at (" << robot.getLocationX()
				<< ", " << robot.getLocationY() << ")!" << std::endl;
			world.setCoinLocation(i, -1, -1);
			return true;
		}
	}

	return false;
}