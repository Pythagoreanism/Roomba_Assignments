#include "func.h"
#include <iostream>
using namespace std;


char printMenu() {
	char userOption;

	cout << "********* MENU *********" << endl;
	cout << "Q - Quit" << endl;
	cout << "P - Print location\n" << endl;
	cout << "n - Move robot North one step" << endl;
	cout << "s - Move robot South one step" << endl;
	cout << "e - Move robot East one step" << endl;
	cout << "w - Move robot West one step" << endl;
	cout << '\n';
	cout << "N - Move robot North" << endl;
	cout << "S - Move robot South" << endl;
	cout << "E - Move robot East" << endl;
	cout << "W - Move robot West" << endl;
	cout << "************************" << endl;

	cout << "Your option: ";
	cin >> userOption;

	return userOption;
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
