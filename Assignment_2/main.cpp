#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "point.h"
#include "world.h"
#include "robot.h"
using namespace std;

bool findCoin(World&, const Robot&);

int main() {

	srand(time(NULL));

	World w;
	Robot roomba;

	w.print();

	roomba.init();
	roomba.setOrientation(east);
	roomba.print();

	for (int i = 0; i < 9; i++) { // Traversing
		for (int j = 0; j < 8; j++) {
			roomba.forward();
			roomba.print();
			findCoin(w, roomba);
		}
		roomba.zag();
		roomba.zig();
	}


	return 0;
}

bool findCoin(World& world, const Robot& robot) {
	for (unsigned int i = 0; i <= 2; i++) {
		if ((world.getCoinLocationX(i) == robot.getLocationX()) && 
			(world.getCoinLocationY(i) == robot.getLocationY())) {
			cout << "Robot found a coin at (" << robot.getLocationX() 
				<< ", " << robot.getLocationY() << ")!" << endl;
			world.setCoinLocation(i, -1, -1);
			return true;
		}
	}

	return false;
}