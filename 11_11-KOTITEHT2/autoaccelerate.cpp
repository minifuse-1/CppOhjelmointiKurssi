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
	void accelerate(float delta_speed) {
		_current_speed += delta_speed;
		if (_current_speed > _max_speed) _current_speed = _max_speed;
		if (_current_speed < 0) _current_speed = 0;
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
	car.accelerate(30);
	car.accelerate(70);
	car.print_info();
	car.accelerate(50);
	car.accelerate(-200);
	car.print_info();
	return 0;
}