#ifndef POINT_H
#define POINT_H

class Point {
private:
	int x;
	int y;

public:
	void setXY(int, int);
	int getX() const;
	int getY() const;

	void print() const;

	Point();

	~Point();

};

#endif // POINT_H