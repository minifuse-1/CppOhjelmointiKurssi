#include <iostream>

class Box {
private:
	int _size = 5;
public:
	void show_size() const {
		std::cout << _size;
	}
};

int main() {
	Box* box = new Box();
	box->show_size();
	delete box;
	return 0;
}