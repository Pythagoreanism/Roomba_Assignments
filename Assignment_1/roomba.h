#ifndef ROOMBA_H
#define ROOMBA_H

class Roomba {
private:
	int x;
	int y;

public:
	void setX(int);
	void setY(int);
	int getX() const;
	int getY() const;

	void printLocation() const;
	void moveOneNorth(int);
	void moveOneSouth(int);
	void moveOneEast(int);
	void moveOneWest(int);
	void moveNorth(int);
	void moveSouth(int);
	void moveEast(int);
	void moveWest(int);

	Roomba();

};

#endif