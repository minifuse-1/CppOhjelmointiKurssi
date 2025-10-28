#include <iostream>
int main() {
	int x = 10;
	int* xPointer = &x;

	std::cout << x << std::endl;
	std::cout << *xPointer << std::endl;

	return 0;
}