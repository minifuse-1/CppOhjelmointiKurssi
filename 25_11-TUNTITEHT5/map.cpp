#include <iostream>
#include <map>
#include <algorithm>
#include <string>

int main() {
	std::map<std::string, std::string> luettelo;
	std::string inputName = " ";
	std::string inputNumber = " ";
	while (inputName != "" || inputNumber != "") {
		std::getline(std::cin, inputNumber);
		if (inputNumber.size() == 0) break;
		std::getline(std::cin, inputName);
		luettelo[inputName] = inputNumber;
	}
	std::cout << "Anna nro" << std::endl;
	while (true) {
		std::cin >> inputName;
		std::cout << luettelo[inputName] << std::endl;
	}

	return 0;
}