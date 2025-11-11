#include <iostream>

class Lamp {
private: 
	bool _on;
public: 
	Lamp() {
		std::cout << "Lamp created";
	}
	~Lamp() {
		std::cout << "Lamp Destroyed";
	}
	void turn_on() {
		_on = true;
	}

	void turn_off() {
		_on = false;
	}
};

int main() {
	Lamp lamppu;
	lamppu.turn_on();
	lamppu.turn_off();
	return 0;
}