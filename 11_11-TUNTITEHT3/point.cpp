#include <iostream>

class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y) : _x(x), _y(y)
	{
		_x = x;
		_y = y;
	}
	void print() const {
		std::cout << _x << std::endl;
		std::cout << _y << std::endl;
	}
};

int main() {
	Point point(5, 2);
	point.print();
	return 0;
}