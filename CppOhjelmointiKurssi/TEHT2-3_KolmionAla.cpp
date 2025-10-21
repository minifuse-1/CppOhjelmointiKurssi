#include <iostream>
#include <string>

// Uudellennimeä mainiksi jos haluat buildaa

double static CalculateTriangleSurface(double width, double height) {
	return (width * height) / 2;
}

int main3() {

	double inputWidth;
	double inputHeight;

	std::cout << "Laita Kolmion leveys metreissä: \n";
	std::cin >> inputWidth;
	std::cout << "Laita Kolmion korkeus metreissä: \n";
	std::cin >> inputHeight;

	std::string output;
	output = std::to_string(CalculateTriangleSurface(inputWidth, inputHeight));
	std::cout << output + "m^2 ";

	return 0;
}

