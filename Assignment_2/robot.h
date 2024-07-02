#ifndef ROBOT_H
#define ROBOT_H
#include "point.h"

const unsigned int NORTH_WALL = 0;
const unsigned int SOUTH_WALL = 10;
const unsigned int WEST_WALL = 0;
const unsigned int EAST_WALL = 10;
enum Orientation { north = 0, south, east, west };

class Robot {
private:
	Point location;
	Orientation currentOrientation;

public:
	void setLocation(int, int);
	void setOrientation(Orientation);
	int getLocationX() const;
	int getLocationY() const;
	Orientation getOrientation() const;

	void print() const;
	void init();
	bool forward();
	void turnCW(); // TODO: Find better method (use convenience of enumeration)
	void turnAntiCW(); // TODO: Find better method (use convenience of enumeration)
	bool northEnd() const;
	bool eastEnd() const;
	bool westEnd() const;
	bool southEnd() const;
	bool zig();
	bool zag();

	Robot();

	~Robot();

};

#endif // ROBOT_H