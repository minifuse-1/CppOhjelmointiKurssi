#include <iostream>
#include <string>

// Uudellennime� mainiksi jos haluat buildaa

double static CalculateTriangleSurface(double width, double height) {
	return (width * height) / 2;
}

int main3() {

	double inputWidth;
	double inputHeight;

	std::cout << "Laita Kolmion leveys metreiss�: \n";
	std::cin >> inputWidth;
	std::cout << "Laita Kolmion korkeus metreiss�: \n";
	std::cin >> inputHeight;

	std::string output;
	output = std::to_string(CalculateTriangleSurface(inputWidth, inputHeight));
	std::cout << output + "m^2 ";

	return 0;
}

