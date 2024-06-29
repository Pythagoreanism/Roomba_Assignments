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
