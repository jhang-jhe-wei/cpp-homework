#include <iostream>
using namespace std;

class Point {
private:
	int vertical;
	int horizontal;
public:	
	Point() {
		vertical = 0;
		horizontal = 0;
	}
	void Set(int vertical, int horizontal) {
		this->vertical = vertical;
		this->horizontal = horizontal;
	}
	void move(int x, int y);
	void rotate();
	int retrieveVertical() const {return vertical;}
	int retrieveHorizontal() const {return horizontal;}
};

void Point::move(int x, int y) {
	vertical += x;
	horizontal += y;
}
void Point::rotate() {
	int tempVertical = vertical;
	vertical = horizontal;
	horizontal = -tempVertical;
}

int main(void) {
	Point A,B,C;
	
	A.set(5, -20);
	cout << A.retieveVertical() << " " << A.retieveHorizontal() << endl;

	B.set(3, -2);
	cout << B.retieveVertical() << " " << B.retieveHorizontal() << endl;

	B.move(1, 2);
	cout << B.retieveVertical() << " " << B.retieveHorizontal() << endl;

	C.set(5, 25);
	cout << C.retieveVertical() << " " << C.retieveHorizontal() << endl;
	C.move(3, -15);
	cout << C.retieveVertical() << " " << C.retieveHorizontal() << endl;

	for (int i = 0; i < 4; i++) {
		C.rotate();
		cout << C.retieveVertical() << " " << C.retieveHorizontal() << endl;
	}

	return 0;
}
