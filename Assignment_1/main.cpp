#include <iostream>
#include "func.h"
using namespace std;


int main() {

	const int NORTH_WALL = 0;
	const int SOUTH_WALL = 10;
	const int EAST_WALL = 10;
	const int WEST_WALL = 0;
	int x = 1, y = 1;
	char userOpt = '\0'; // Sentinel

	do {
		userOpt = printMenu();

		switch (userOpt) {
		case 'Q':
			cout << "\nExiting\n" << endl;
			break;

		case 'P':
			printLocation(x, y);
			break;

		case 'n':
			moveOneNorth(y, NORTH_WALL);
			break;

		case 's':
			moveOneSouth(y, SOUTH_WALL);
			break;

		case 'e':
			moveOneEast(x, EAST_WALL);
			break;

		case 'w':
			moveOneWest(x, WEST_WALL);
			break;

		case 'N':
			moveNorth(y, NORTH_WALL);
			break;

		case 'S':
			moveSouth(y, SOUTH_WALL);
			break;

		case 'E':
			moveEast(x, EAST_WALL);
			break;

		case 'W':
			moveWest(x, WEST_WALL);
			break;			

		default:
			cerr << "\nERROR: Not a valid option!\n" << endl;
		}

	} while (userOpt != 'Q');


	return 0;
}
