#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "point.h"
#include "world.h"
#include "robot.h"
using namespace std;


int main() {

	srand(time(NULL));

	World w;
	Robot roomba;

	w.print();

	/*roomba.init();
	roomba.setOrientation(east);
	roomba.print();

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			roomba.forward();
			roomba.print();
		}
		roomba.zag();
		roomba.zig();
	}*/


	return 0;
}