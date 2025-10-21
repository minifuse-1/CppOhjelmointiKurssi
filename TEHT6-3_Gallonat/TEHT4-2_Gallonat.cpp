#include <iostream>
#include <string>

double GallonToLitre(double gallon) {
	double output = gallon * 3.785;
	return output;
}

int main() {

	double input = 0;
	while (input >= 0) {
		std::cout << "Anna bensiinin määrä nestegallonoina: \n";
		std::cin >> input;
		if (input < 0) break;
		std::cout << std::to_string(GallonToLitre(input)) + "L \n";
	}

	return 0;
}

