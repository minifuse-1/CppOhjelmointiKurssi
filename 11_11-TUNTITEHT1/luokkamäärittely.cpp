#include <iostream>

class Car {
private:
	std::string _brand;
	int _year;

public:
	void set_brand(const std::string& brand) {
		_brand = brand;
	}
	void set_year(int year) {
		_year = year;
	}
	void print_info() {
		std::cout << _brand;
		std::cout << _year;
	}
};

int main() {
	Car mycar;
	mycar.set_brand("Volvo");
	mycar.set_year(2021);
	mycar.print_info();
	return 0;
}