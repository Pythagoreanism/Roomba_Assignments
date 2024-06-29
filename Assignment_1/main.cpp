#include <iostream>
#include <cstdlib>
#include <ctime>
#include "func.h"
using namespace std;


class Roomba {
private:
	int x;
	int y;

public:
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	int getX() const { return x; }
	int getY() const { return y; }

	Roomba() {
		x = (rand() % 9) + 1; // 1-9
		y = (rand() % 9) + 1; // 1-9
	}

};

int main() {

	srand(time(NULL));

	Roomba r;
	const int NORTH_WALL = 0;
	const int SOUTH_WALL = 10;
	const int EAST_WALL = 10;
	const int WEST_WALL = 0;
	int x = 1, y = 1;
	char userOpt = '\0'; // Sentinel

	cout << r.getX() << endl;
	cout << r.getY() << endl;

	//do {
	//	userOpt = printMenu();

	//	switch (userOpt) {
	//	case 'Q':
	//		cout << "\nExiting\n" << endl;
	//		break;

	//	case 'P':
	//		printLocation(x, y);
	//		break;

	//	case 'n':
	//		moveOneNorth(y, NORTH_WALL);
	//		break;

	//	case 's':
	//		moveOneSouth(y, SOUTH_WALL);
	//		break;

	//	case 'e':
	//		moveOneEast(x, EAST_WALL);
	//		break;

	//	case 'w':
	//		moveOneWest(x, WEST_WALL);
	//		break;

	//	case 'N':
	//		moveNorth(y, NORTH_WALL);
	//		break;

	//	case 'S':
	//		moveSouth(y, SOUTH_WALL);
	//		break;

	//	case 'E':
	//		moveEast(x, EAST_WALL);
	//		break;

	//	case 'W':
	//		moveWest(x, WEST_WALL);
	//		break;			

	//	default:
	//		cerr << "\nERROR: Not a valid option!\n" << endl;
	//	}

	//} while (userOpt != 'Q');


	return 0;
}
