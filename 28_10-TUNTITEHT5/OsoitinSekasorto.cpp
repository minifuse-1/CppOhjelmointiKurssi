#include <iostream>

int main() {
	int x = 10;
	int* xP = &x;
	int** xxP = &xP;

	std::cout << **xxP;

	return 0;
}