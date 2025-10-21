#include <iostream>
#include <string>
#include <vector>

int main() {

	std::string input;
	std::vector<int> listOfNumbers;

	do {
		std::cout << "Laita numero:\n";
		std::cin >> input;
		listOfNumbers.push_back(std::stoi(input));
	} while (input.length() >= 0);

	auto minValue = std::min_element(std::begin(listOfNumbers), std::end(listOfNumbers));
	auto maxValue = std::max_element(std::begin(listOfNumbers), std::end(listOfNumbers));

	std::cout << minValue[0];
	std::cout << "\n";
	std::cout << maxValue[0];

	return 0;
}

