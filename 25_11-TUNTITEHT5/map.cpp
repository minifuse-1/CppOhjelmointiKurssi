#include <iostream>
#include <map>
#include <algorithm>
#include <string>

int main() {
	std::map<std::string, std::string> luettelo;
	std::string inputName = " ";
	std::string inputNumber = " ";
	while (true) {
		std::cin >> inputNumber;
		std::cin >> inputName;
		if (std::cin.get() == '\n' && inputNumber.size() == 0 || inputName.size() == 0) break;
		luettelo[inputNumber] = inputName;
	}

	while (true) {
		std::cin >> inputNumber;
		std::cout << luettelo[inputNumber];
	}

	return 0;
}