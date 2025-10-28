#include <iostream>
int main() {
	double z = 1.1;
	double* zP = &z;

	std::cout << *zP << std::endl;
	*zP += 0.2;
	std::cout << *zP << std::endl;
	return 0;
}