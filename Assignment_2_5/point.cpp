#include "point.h"
#include <iostream>

void Point::setXY(int x, int y) {
	this->x = x;
	this->y = y;
}
int Point::getX() const { return x; }
int Point::getY() const { return y; }

void Point::print() const {
	std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}

Point::Point() { x = 0; y = 0; } // Default constructor

Point::~Point() { std::cout << "Destroying point..." << std::endl; }