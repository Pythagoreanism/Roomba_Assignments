#include <iostream>
using namespace std;


const unsigned int NORTH_WALL = 0;
const unsigned int SOUTH_WALL = 10;
const unsigned int WEST_WALL = 10;
const unsigned int EAST_WALL = 0;
enum Orientation { North = 0, South, East, West };

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
	Point coins[3];
	
public:
	void setCoinLocation(int i, int x, int y) { coins[i].setXY(x, y); }

	void print() const {
		for (unsigned int i = 0; i < 3; i++) {
			cout << "Coin " << i + 1 << ": (" << coins[i].getX() <<
				", " << coins[i].getY() << ")" << endl;
		}
	}
	
	World() {
		cout << "Creating world..." << endl;
		for (unsigned i = 0; i < 3; i++) {
			coins[i].setXY(0, 0);
		}
	}
	~World() { cout << "Destorying world" << endl; }

};

int main() {
	
	Point p1;
	p1.setXY(4, 5);

	cout << "x: " << p1.getX() << " y: " << p1.getY() << endl;
	p1.print();

	World w;
	w.setCoinLocation(0, 2, 5); // Note: Index starts at 0
	w.print();


	return 0;
}