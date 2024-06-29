#include <iostream>
using namespace std;

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
			cout << "\nRobot's location is (" << x << ", " << y << ")\n" << endl;
			break;

		case 'n':
			if (y - 1 > NORTH_WALL) {
				cout << "\nMoving North one step...\n" << endl;
				y--;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 's':
			if (y + 1 < SOUTH_WALL) {
				cout << "\nMoving South one step...\n" << endl;
				y++;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'e':
			if (x + 1 < EAST_WALL) {
				cout << "\nMoving East one step...\n" << endl;
				x++;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'w':
			if (x - 1 > WEST_WALL) {
				cout << "\nMoving West one step...\n" << endl;
				x--;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'N':
			if (y - 1 > NORTH_WALL) {
				cout << "\nMoving North...\n" << endl;
				y = 1;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'S':
			if (y + 1 < SOUTH_WALL) {
				cout << "\nMoving South...\n" << endl;
				y = 9;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'E':
			if (x + 1 < EAST_WALL) {
				cout << "\nMoving East...\n" << endl;
				x = 9;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;

		case 'W':
			if (x - 1 > WEST_WALL) {
				cout << "\nMoving West...\n" << endl;
				x = 1;
			}
			else {
				cout << "\nOuch!\n" << endl;
			}
			break;			

		default:
			cerr << "\nERROR: Not a valid option!\n" << endl;
		}

	} while (userOpt != 'Q');


	return 0;
}