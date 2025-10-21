#include <iostream>
#include <string>

int main() {

	double input = 0;
	double sentit;

	while (input >= 0) {
		std::cout << "Laita Tuumat:";
		std::cin >> input;
		if (input < 0) break;
		sentit = 2.54 * input;
		std::cout << std::to_string(sentit) + " cm \n";
	}

	return 0;
}

