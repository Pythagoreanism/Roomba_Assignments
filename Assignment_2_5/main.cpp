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

	World gameWorld;
	Robot player, pc;
	char userOpt = '\0';
	bool hasMoved = false;

	player.init();
	gameWorld.print();

	cout << "Would you like to play? (y/n)" << endl;
	cin >> userOpt;

	while (userOpt != 'y') {
		cout << "Goodbye!" << endl;
		return 0;
	}

	do {
		cout << "********* MENU **********" << endl;
		cout << "\tW" << endl;
		cout << "A\tS\tD\n" << endl;
		cout << "W - Move forward" << endl;
		cout << "A - Turn left" << endl;
		cout << "S - Move backward" << endl;
		cout << "D - Turn right" << endl;
		cout << "P - Display position" << endl;
		cout << "Your option: ";
		cin >> userOpt;

		hasMoved = false;

		switch (userOpt) {
		case 'W':
			player.forward();
			hasMoved = true;
			break;

		case 'A':
			player.turnAntiCW();
			break;

		case 'S':
			player.backward();
			hasMoved = true;
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

	} while (!hasMoved);

	// PC's turn
	cout << "PC's turn" << endl;


	return 0;
}
