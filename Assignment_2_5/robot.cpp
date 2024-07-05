#include "robot.h"
#include <iostream>
#include <string>

void Robot::setLocation(int x, int y) { location.setXY(x, y); }
void Robot::setOrientation(Orientation setOr) { currentOrientation = setOr; }
int Robot::getLocationX() const { return location.getX(); }
int Robot::getLocationY() const { return location.getY(); }
Orientation Robot::getOrientation() const { return currentOrientation; }

void Robot::print() const {
	std::string orientation = "\0";

	if (currentOrientation == 0) {
		orientation = "North";
	}
	else if (currentOrientation == 1) {
		orientation = "South";
	}
	else if (currentOrientation == 2) {
		orientation = "East";
	}
	else if (currentOrientation == 3) {
		orientation = "West";
	}
	else {
		orientation = "N/A";
	}

	std::cout << '\n' << std::endl;
	location.print();
	std::cout << "Orientation: " << orientation << std::endl;
	std::cout << '\n' << std::endl;
}
void Robot::init() { location.setXY(1, 1); }
bool Robot::forward() {
	int x = location.getX(), y = location.getY();

	switch (currentOrientation) {
	case north:
		if (y - 1 > NORTH_WALL) {
			std::cout << "Moving forward..." << std::endl;
			y--;
			location.setXY(x, y);
			return true;
		}
		else {
			std::cout << "Ouch!" << std::endl;
			return false;
		}
		break;

	case south:
		if (y + 1 < SOUTH_WALL) {
			std::cout << "Moving forward..." << std::endl;
			y++;
			location.setXY(x, y);
			return true;
		}
		else {
			std::cout << "Ouch!" << std::endl;
			return false;
		}
		break;

	case east:
		if (x + 1 < EAST_WALL) {
			std::cout << "Moving forward..." << std::endl;
			x++;
			location.setXY(x, y);
			return true;
		}
		else {
			std::cout << "Ouch!" << std::endl;
			return false;
		}
		break;

	case west:
		if (x - 1 > WEST_WALL) {
			std::cout << "Moving forward..." << std::endl;
			x--;
			location.setXY(x, y);
			return true;
		}
		else {
			std::cout << "Ouch!" << std::endl;
			return false;
		}
		break;
	default:
		std::cerr << "ERROR: forward()" << std::endl;
	}
}
void Robot::turnCW() { // TODO: Find better method (use convenience of enumeration)
	switch (currentOrientation) {
	case north:
		std::cout << "Turning clockwise (East)..." << std::endl;
		currentOrientation = east;
		break;

	case east:
		std::cout << "Turning clockwise (South)..." << std::endl;
		currentOrientation = south;
		break;

	case south:
		std::cout << "Turning clockwise (West)..." << std::endl;
		currentOrientation = west;
		break;

	case west:
		std::cout << "Turning clockwise (North)..." << std::endl;
		currentOrientation = north;
		break;
	}
}
void Robot::turnAntiCW() { // TODO: Find better method (use convenience of enumeration)
	switch (currentOrientation) {
	case north:
		std::cout << "Turning clockwise (West)..." << std::endl;
		currentOrientation = west;
		break;

	case east:
		std::cout << "Turning clockwise (North)..." << std::endl;
		currentOrientation = north;
		break;

	case south:
		std::cout << "Turning clockwise (East)..." << std::endl;
		currentOrientation = east;
		break;

	case west:
		std::cout << "Turning clockwise (South)..." << std::endl;
		currentOrientation = south;
		break;
	}
}
bool Robot::northEnd() const {
	if (location.getY() == NORTH_WALL + 1) {
		return true;
	}
	else {
		return false;
	}
}
bool Robot::eastEnd() const {
	if (location.getX() == EAST_WALL - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool Robot::westEnd() const {
	if (location.getX() == WEST_WALL + 1) {
		return true;
	}
	else {
		return false;
	}
}
bool Robot::southEnd() const {
	if (location.getY() == SOUTH_WALL - 1) {
		return true;
	}
	else {
		return false;
	}
}
bool Robot::zig() {
	if (westEnd()) {
		turnAntiCW();
		forward();
		turnAntiCW();
		return true;
	}
	else {
		std::cout << "Not at west end!" << std::endl;
		return false;
	}
}
bool Robot::zag() {
	if (eastEnd()) {
		turnCW();
		forward();
		turnCW();
		return true;
	}
	else {
		std::cout << "Not at east end!" << std::endl;
		return false;
	}
}

Robot::Robot() {
	location.setXY(0, 0);
	currentOrientation = north;
}

Robot::~Robot() { std::cout << "Destroying robot..." << std::endl; }