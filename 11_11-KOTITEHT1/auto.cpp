#include <iostream>

class Auto {
private:
	float _current_speed;
	float _max_speed;
	float _distance_traveled;
	std::string _register_number;
public: 
	Auto(std::string register_param, float max_speed) {
		_max_speed = max_speed;
		_register_number = register_param;
		_current_speed = 0;
		_distance_traveled = 0;
	}
	void print_info() const {
		std::cout << "Speed : ";
		std::cout << _current_speed << std::endl;
		std::cout << "Max Speed : ";
		std::cout << _max_speed << std::endl;
		std::cout << "distance traveled : ";
		std::cout << _distance_traveled << std::endl;
		std::cout << "Register : ";
		std::cout << _register_number << std::endl;
	}
};

int main() {
	Auto car("ABC-123", 142);
	car.print_info();
	return 0;
}