#include <iostream>
#include <string>
class Auto {
private:
	float _current_speed;
	float _max_speed;
	float _distance_traveled;
	std::string _register_number;
public:
	Auto() {
		_max_speed = 100;
		std::string string = std::to_string(std::rand() % 101);
		_register_number = "ABC-" + string;
		_current_speed = 0;
		_distance_traveled = 0;
	}
	Auto(std::string register_param, float max_speed) {
		_max_speed = max_speed;
		_register_number = register_param;
		_current_speed = 0;
		_distance_traveled = 0;
	}
	float get_distance() const {
		return _distance_traveled;
	}
	void accelerate(float delta_speed) {
		_current_speed += delta_speed;
		if (_current_speed > _max_speed) _current_speed = _max_speed;
		if (_current_speed < 0) _current_speed = 0;
	}
	void drive(float hours) {
		_distance_traveled += hours * _current_speed;
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
		std::cout << std::endl;
	}
};

int main() {
	const int how_many_cars = 10;
	Auto cars[how_many_cars];
	float leading_car_distance = 0;
	while (leading_car_distance < 10000) {
		for (int i = 0; i < how_many_cars; i++) {
			bool is_negative{};
			if (std::rand() % 2 == 0) is_negative = true;
			else is_negative = false;

			if (is_negative) {
				cars[i].accelerate((std::rand() % 16 * -1));
			}
			else {
				cars[i].accelerate((std::rand() % 16));
			}

			cars[i].drive(1);
			if (leading_car_distance < cars[i].get_distance()) leading_car_distance = cars[i].get_distance();

		}
	}
	for (int i = 0; i < how_many_cars; i++) {
		cars[i].print_info();
	}
	return 0;
}