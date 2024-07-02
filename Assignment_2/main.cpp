#include <iostream>
#include <string>
using namespace std;


const unsigned int NORTH_WALL = 0;
const unsigned int SOUTH_WALL = 10;
const unsigned int WEST_WALL = 0;
const unsigned int EAST_WALL = 10;
enum Orientation { north = 0, south, east, west };

class Point {
private:
	int x;
	int y;

public:
	void setXY(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() const { return x; }
	int getY() const { return y; }

	void print() const {
		cout << "Point: (" << x << ", " << y << ")" << endl;
	}

	Point() { x = 0; y = 0; } // Default constructor

	~Point() { cout << "Destroying point..." << endl; }
	 
};

class World {
private:
	Point coinLocation[3];
	
public:
	void setCoinLocation(int i, int x, int y) { coinLocation[i].setXY(x, y); }

	void print() const {
		for (unsigned int i = 0; i < 3; i++) {
			cout << "Coin " << i + 1 << ": (" << coinLocation[i].getX() <<
				", " << coinLocation[i].getY() << ")" << endl;
		}
	}
	
	World() {
		cout << "Creating world..." << endl;
		for (unsigned i = 0; i < 3; i++) {
			coinLocation[i].setXY(0, 0);
		}
	}

	~World() { cout << "Destorying world" << endl; }

};

class Robot {
private:
	Point location;
	Orientation currentOrientation;

public:
	void setLocation(int x, int y) { location.setXY(x, y); }
	void setOrientation(Orientation setOr) { currentOrientation = setOr; }
	int getLocationX() const { return location.getX(); }
	int getLocationY() const { return location.getY(); }
	Orientation getOrientation() const { return currentOrientation; }

	void print() const {
		string orientation = "\0";

		if (currentOrientation == 0) {
			orientation = "North";
		}
		else if (currentOrientation == 1) {
			orientation = "South";
		}
		else if (currentOrientation == 2) {
			orientation = "West";
		}
		else if (currentOrientation == 3) {
			orientation = "West";
		}
		else {
			orientation = "N/A";
		}

		location.print();
		cout << "Orientation: " << orientation << endl;
	}
	void init() { location.setXY(0, 0); }
	bool forward() {
		int x = location.getX(), y = location.getY();

		switch (currentOrientation) {
		case north:
			if (y - 1 > NORTH_WALL) {
				y--;
				location.setXY(x, y);
				return true;
			}
			else {
				cout << "Ouch!" << endl;
				return false;
			}
			break;

		case south:
			if (y + 1 < SOUTH_WALL) {
				y++;
				location.setXY(x, y);
				return true;
			}
			else {
				cout << "Ouch!" << endl;
				return false;
			}
			break;

		case east:
			if (x + 1 < EAST_WALL) {
				x++;
				location.setXY(x, y);
				return true;
			}
			else {
				cout << "Ouch!" << endl;
				return false;
			}
			break;

		case west:
			if (x - 1 > WEST_WALL) {
				x--;
				location.setXY(x, y);
				return true;
			}
			else {
				cout << "Ouch!" << endl;
				return false;
			}
			break;
		default:
			cerr << "ERROR: forward()" << endl;
		}
	}
	void turnCW() { // TODO: Find better method (use convenience of enumeration)
		switch (currentOrientation) {
		case north:
			cout << "Turning clockwise (East)..." << endl;
			currentOrientation = east;
			break;

		case east:
			cout << "Turning clockwise (South)..." << endl;
			currentOrientation = south;
			break;

		case south:
			cout << "Turning clockwise (West)..." << endl;
			currentOrientation = west;
			break;

		case west:
			cout << "Turning clockwise (North)..." << endl;
			currentOrientation = north;
			break;
		}
	}

	void turnAntiCW() { // TODO: Find better method (use convenience of enumeration)
		switch (currentOrientation) {
		case north:
			cout << "Turning clockwise (West)..." << endl;
			currentOrientation = west;
			break;

		case east:
			cout << "Turning clockwise (North)..." << endl;
			currentOrientation = north;
			break;

		case south:
			cout << "Turning clockwise (East)..." << endl;
			currentOrientation = east;
			break;

		case west:
			cout << "Turning clockwise (South)..." << endl;
			currentOrientation = south;
			break;
		}
	}
	bool northEnd() const {
		if (location.getY() == NORTH_WALL + 1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool eastEnd() const {
		if (location.getX() == EAST_WALL - 1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool westEnd() const {
		if (location.getX() == WEST_WALL + 1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool southEnd() const {
		if (location.getY() == SOUTH_WALL - 1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool zig() {
		if (westEnd()) {
			turnAntiCW();
			forward();
			turnAntiCW();
			return true;
		}
		else {
			cout << "Not at west end!" << endl;
			return false;
		}
	}
	bool zag() {
		if (eastEnd()) {
			turnCW();
			forward();
			turnCW();
			return true;
		}
		else {
			cout << "Not at east end!" << endl;
			return false;
		}
	}

	Robot() { 
		location.setXY(0, 0);
		currentOrientation = north;
	}

	~Robot() { cout << "Destroying robot..." << endl; }

};

int main() {
	
	Point p1;
	p1.setXY(4, 5);

	cout << "x: " << p1.getX() << " y: " << p1.getY() << endl;
	p1.print();

	World w;
	w.setCoinLocation(0, 2, 5); // Note: Index starts at 0
	w.print();

	Robot r1;
	r1.print();
	
	r1.setOrientation(east);
	
	for (int i = 0; i < 10; i++) {
		r1.forward();
		r1.print();
	}

	r1.zig();
	r1.zag();
	r1.print();


	return 0;
}