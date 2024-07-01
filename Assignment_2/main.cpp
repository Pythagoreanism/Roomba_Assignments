#include <iostream>
using namespace std;


class Point {
private:
	int x;
	int y;

public:
	void setXY(int x, int y) {
		this->x = x;
		(*this).y = y;
	}
	int getX() const { return x; }
	int getY() const { return y; }

	void print() const {
		cout << "Point: (" << x << ", " << y << ")" << endl;
	}

	Point() { x = 0; y = 0; } // Default constructor
	~Point() { cout << "Destroying point..."; }
	 
};



int main() {
	
	Point p1;
	p1.setXY(4, 5);

	cout << "x: " << p1.getX() << " y: " << p1.getY() << endl;
	p1.print();

	return 0;
}