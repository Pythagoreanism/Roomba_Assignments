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

	Robot player;
	char userOpt = '\0';

	player.init();

	do {
		cout << "********* MENU **********" << endl;
		cout << "\tW" << endl;
		cout << "A\tS\tD\n" << endl;
		cout << "W - Move forward" << endl;
		cout << "A - Turn left" << endl;
		cout << "S - Move backward" << endl;
		cout << "D - Turn right" << endl;
		cout << "P - Display position" << endl;
		cout << "Q - Quit" << endl;

		cout << "Your option: ";
		cin >> userOpt;

		switch (userOpt) {
		case 'W':
			player.forward();
			break;

		case 'A':
			player.turnAntiCW();
			break;

		case 'S':
			// TODO: Define backward function
			break;

		case 'D':
			player.turnCW();
			break;

		case 'P':
			player.print();
			break;

		default:
			cerr << "ERROR: Invalid option!" << endl;
			break;

		}

	} while (userOpt != 'Q');

	return 0;
}
