#include "roomba.h"
#include <iostream>

void Roomba::setX(int _x) { x = _x; }
void Roomba::setY(int _y) { y = _y; }
int Roomba::getX() const { return x; }
int Roomba::getY() const { return y; }

void Roomba::printLocation() const {
	std::cout << "\nRobot location is at (" << x << ", " << y << ")\n" << std::endl;
}
void Roomba::moveOneNorth(int northWall) {
	if (y - 1 > northWall) {
		std::cout << "\nMoving North one step...\n" << std::endl;
		y--;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveOneSouth(int southWall) {
	if (y + 1 < southWall) {
		std::cout << "\nMoving South one step...\n" << std::endl;
		y++;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveOneEast(int eastWall) {
	if (x + 1 < eastWall) {
		std::cout << "\nMoving East one step...\n" << std::endl;
		x++;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveOneWest(int westWall) {
	if (x - 1 > westWall) {
		std::cout << "\nMoving West one step...\n" << std::endl;
		x--;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveNorth(int northWall) {
	if (y - 1 > northWall) {
		std::cout << "\nMoving North...\n" << std::endl;
		y = northWall + 1;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveSouth(int southWall) {
	if (y + 1 < southWall) {
		std::cout << "\nMoving South...\n" << std::endl;
		y = southWall - 1;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveEast(int eastWall) {
	if (x + 1 < eastWall) {
		std::cout << "\nMoving East...\n" << std::endl;
		x = eastWall - 1;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}
void Roomba::moveWest(int westWall) {
	if (x - 1 > westWall) {
		std::cout << "\nMoving West...\n" << std::endl;
		x = westWall + 1;
	}
	else {
		std::cout << "\nOuch!\n" << std::endl;
	}
}

Roomba::Roomba() {
	x = (rand() % 9) + 1; // 1-9
	y = (rand() % 9) + 1; // 1-9
}