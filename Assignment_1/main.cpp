#include <iostream>
using namespace std;

void printLocation(int, int);
void moveOneNorth(int&, int);
void moveOneSouth(int&, int);
void moveOneEast(int&, int);
void moveOneWest(int&, int);
void moveNorth(int&, int);
void moveSouth(int&, int);
void moveEast(int&, int);
void moveWest(int&, int);


int main() {

	const int NORTH_WALL = 0;
	const int SOUTH_WALL = 10;
	const int EAST_WALL = 10;
	const int WEST_WALL = 0;
	int x = 1, y = 1;
	char userOpt = '\0'; // Sentinel

	do {
		cout << "********* MENU *********"		<< endl;
		cout << "Q - Quit"						<< endl;
		cout << "P - Print location\n"          << endl;
		cout << "n - Move robot North one step" << endl;
		cout << "s - Move robot South one step" << endl;
		cout << "e - Move robot East one step"  << endl;
		cout << "w - Move robot West one step"  << endl;
		cout << '\n';
		cout << "N - Move robot North" << endl;
		cout << "S - Move robot South" << endl;
		cout << "E - Move robot East"  << endl;
		cout << "W - Move robot West"  << endl;
		cout << "************************" << endl;

		cout << "Your option: ";
		cin >> userOpt;

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

void printLocation(int robotX, int robotY) {
	cout << "\nRobot's location is (" << robotX << ", " << robotY << ")\n" << endl;
}

void moveOneNorth(int& robotY, int northWall) {
	if (robotY - 1 > northWall) {
		cout << "\nMoving North one step...\n" << endl;
		robotY--;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveOneSouth(int& robotY, int southWall) {
	if (robotY + 1 < southWall) {
		cout << "\nMoving South one step...\n" << endl;
		robotY++;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveOneEast(int& robotX, int eastWall) {
	if (robotX + 1 < eastWall) {
		cout << "\nMoving East one step...\n" << endl;
		robotX++;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveOneWest(int& robotX, int westWall) {
	if (robotX - 1 > westWall) {
		cout << "\nMoving West one step...\n" << endl;
		robotX--;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveNorth(int& y, int northWall) {
	if (y - 1 > northWall) {
		cout << "\nMoving North...\n" << endl;
		y = northWall + 1;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveSouth(int& robotY, int southWall) {
	if (robotY + 1 < southWall) {
		cout << "\nMoving South...\n" << endl;
		robotY = southWall - 1;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveEast(int& robotX, int eastWall) {
	if (robotX + 1 < eastWall) {
		cout << "\nMoving East...\n" << endl;
		robotX = eastWall - 1;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}

void moveWest(int& robotX, int westWall) {
	if (robotX - 1 > westWall) {
		cout << "\nMoving West...\n" << endl;
		robotX = westWall + 1;
	}
	else {
		cout << "\nOuch!\n" << endl;
	}
}