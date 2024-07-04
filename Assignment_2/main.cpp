#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "point.h"
#include "world.h"
#include "robot.h"
#include "func.h"
using namespace std;


int main() {

	srand(time(NULL));

	int moves = 0;
	World w;
	Robot roomba;

	w.print();

	roomba.init();
	findCoin(w, roomba, moves);
	roomba.setOrientation(east);
	roomba.print();

	for (int i = 0; i < 9; i++) { // Traversing
		for (int j = 0; j < 8; j++) {
			roomba.forward();
			moves++;
			roomba.print();
			findCoin(w, roomba, moves);
			if (allCoinsFound(w)) {
				return 0;
			}
		}
		if (roomba.eastEnd()) {
			roomba.zag();
			moves++;
			findCoin(w, roomba, moves);
		}
		else if (roomba.westEnd()) {
			roomba.zig();
			moves++;
			findCoin(w, roomba, moves);
		}
		else {
			cout << "Roomba is not in either ends!" << endl;
		}
	}


	return 0;
}
