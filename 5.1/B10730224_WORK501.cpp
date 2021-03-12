#include <iostream>
using namespace std;
class Point {
public:
	Point();
	void Rotate();
	void Set(int x, int y);
	void Move(int x, int y);
	void Reflect();
	int RetrieveVertical();
	int RetrieveHorizontal();
private:
	int _x;
	int _y;
};
int main(void) {
	Point point;
	point.Set(0, 5);
	cout << point.RetrieveHorizontal() << " " << point.RetrieveVertical() << endl;
	point.Reflect();
	cout << point.RetrieveHorizontal() << " " << point.RetrieveVertical() << endl;
	point.Move(1, 2);
	cout << point.RetrieveHorizontal() << " " << point.RetrieveVertical() << endl;
	point.Rotate();
	cout << point.RetrieveHorizontal() << " " << point.RetrieveVertical() << endl;
	Point copy = point;
	cout << "Copy point:" << endl;
	cout << copy.RetrieveHorizontal() << " " << copy.RetrieveVertical() << endl;
	return 0;
}

Point::Point() {
	_x = 0;
	_y = 0;
}
void Point::Rotate()
{
	int temp;
	temp = _x;
	_x = _y;
	_y = temp * -1;
}
void Point::Set(int x, int y)
{
	_x = x;
	_y = y;
}

void Point::Move(int x, int y)
{
	_x += x;
	_y += y;
}

void Point::Reflect() 
{
	_x *= -1;
	_y *= -1;
}
int Point::RetrieveVertical()
{
	return _y;
}

int Point::RetrieveHorizontal()
{
	return _x;
}