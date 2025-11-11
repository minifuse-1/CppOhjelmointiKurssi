#include <iostream>

class Car {
public:
	std::string brand;
	int year;
	void set_brand(const std::string& brandParam) {
		brand = brandParam;
	}
	void set_year(int yearParam) {
		year = yearParam;
	}
};

static void print_info(const Car& car) {
	std::cout << car.brand;
	std::cout << car.year;
}

int main() {
	Car mycar;
	mycar.set_brand("Skoda");
	mycar.set_year(2006);
	print_info(mycar);
	return 0;
}