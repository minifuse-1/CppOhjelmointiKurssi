#include <iostream>
int main() {
	int x = 10;
	int* y = &x;

	// molempien osoitteet muistissa
	std::cout << &x << std::endl;
	std::cout << &y << std::endl;

	std::cout << " " << std::endl;

	// molempien arvo
	std::cout << x << std::endl;
	std::cout << y << std::endl;


	return 0;
}