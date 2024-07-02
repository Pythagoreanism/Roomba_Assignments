#include <iostream>
#include <string>
#include "point.h"
#include "world.h"
#include "robot.h"
using namespace std;


int main() {

	World w;
	Robot roomba;

	roomba.init();
	roomba.setOrientation(east);
	roomba.print();

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			roomba.forward();
			roomba.print();
		}
		roomba.zag();
		roomba.zig();
	}


	return 0;
}