#include <iostream>
#include <cstdlib>
#include <ctime>
#include "func.h"
#include "roomba.h"
using namespace std;


int main() {

	srand(time(NULL));

	Roomba r;
	const int NORTH_WALL = 0;
	const int SOUTH_WALL = 10;
	const int EAST_WALL = 10;
	const int WEST_WALL = 0;
	char userOpt = '\0'; // Sentinel

	cout << r.getX() << endl;
	cout << r.getY() << endl;

	do {
		userOpt = printMenu();

		switch (userOpt) {
		case 'Q':
			cout << "\nExiting\n" << endl;
			break;

		case 'P':
			r.printLocation();
			break;

		case 'n':
			r.moveOneNorth(NORTH_WALL);
			break;

		case 's':
			r.moveOneSouth(SOUTH_WALL);
			break;

		case 'e':
			r.moveOneEast(EAST_WALL);
			break;

		case 'w':
			r.moveOneWest(WEST_WALL);
			break;

		case 'N':
			r.moveNorth(NORTH_WALL);
			break;

		case 'S':
			r.moveSouth(SOUTH_WALL);
			break;

		case 'E':
			r.moveEast(EAST_WALL);
			break;

		case 'W':
			r.moveWest(WEST_WALL);
			break;			

		default:
			cerr << "\nERROR: Not a valid option!\n" << endl;
		}

	} while (userOpt != 'Q');


	return 0;
}
