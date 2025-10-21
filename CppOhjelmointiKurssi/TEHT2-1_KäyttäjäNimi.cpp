#include <iostream>

int main() {
	
	std::string name;
	std::cout << "Laita nimesi: \n";
	std::cin >> name;
	std::cout << "Tere! " + name;

	return 0;
}