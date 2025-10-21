#include <iostream>
#include <string>



double static CalculateBoxSurface(double width, double height) {
	return (width * height);
}

double static CalculateBoxPerimeter(double width, double height) {
	return (2*width + 2*height);
}

int main() {

	double inputWidth;
	double inputHeight;

	std::cout << "Laita Kolmion leveys metreiss�: \n";
	std::cin >> inputWidth;
	std::cout << "Laita Kolmion korkeus metreiss�: \n";
	std::cin >> inputHeight;

	std::cout << "pinta-ala: " + std::to_string(CalculateBoxSurface(inputWidth, inputHeight))
		+ "m^2 piiri: " + std::to_string(CalculateBoxPerimeter(inputWidth, inputHeight)) + "m";

	return 0;
}

