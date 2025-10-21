#include <iostream>
#include <string>
#include <vector>
#include <ranges>

int main() {

	std::string input;
	std::vector<int> listOfNumbers;

	do {
		std::cout << "Laita numero:\n";
		input = std::cin.get();
		listOfNumbers.push_back(std::stoi(input));
	} while (input != "");

	auto minValue = std::min_element(std::begin(listOfNumbers), std::end(listOfNumbers));
	auto maxValue = std::max_element(std::begin(listOfNumbers), std::end(listOfNumbers));

	std::cout << minValue[0];
	std::cout << maxValue[0];

	return 0;
}

