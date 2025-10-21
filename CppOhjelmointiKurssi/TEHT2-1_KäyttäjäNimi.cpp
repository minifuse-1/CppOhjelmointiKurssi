#include <iostream>

// Uudellennimeä mainiksi jos haluat buildaa
int main2() {
	
	std::string name;
	std::cout << "Laita nimesi: \n";
	std::cin >> name;
	std::cout << "Tere! " + name;

	return 0;
}