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

	void printLocation() const {
		cout << "\nRobot location is at (" << x << ", " << y << ")\n" << endl;
	}
	void moveOneNorth(int northWall) {
		if (y - 1 > northWall) {
			cout << "\nMoving North one step...\n" << endl;
			y--;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveOneSouth(int southWall) {
		if (y + 1 < southWall) {
			cout << "\nMoving South one step...\n" << endl;
			y++;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveOneEast(int eastWall) {
		if (x + 1 < eastWall) {
			cout << "\nMoving East one step...\n" << endl;
			x++;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveOneWest(int westWall) {
		if (x - 1 > westWall) {
			cout << "\nMoving West one step...\n" << endl;
			x--;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveNorth(int northWall) {
		if (y - 1 > northWall) {
			cout << "\nMoving North...\n" << endl;
			y = northWall + 1;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveSouth(int southWall) {
		if (y + 1 < southWall) {
			cout << "\nMoving South...\n" << endl;
			y = southWall - 1;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveEast(int eastWall) {
		if (x + 1 < eastWall) {
			cout << "\nMoving East...\n" << endl;
			x = eastWall - 1;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}
	void moveWest(int westWall) {
		if (x - 1 > westWall) {
			cout << "\nMoving West...\n" << endl;
			x = westWall + 1;
		}
		else {
			cout << "\nOuch!\n" << endl;
		}
	}

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
