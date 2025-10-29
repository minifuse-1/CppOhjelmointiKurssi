#include <iostream>

int sum(int* val1, int* val2) {
	int returnVal = *val1 + *val2;
	return returnVal;
}

int sum(int &val1, int &val2) {
	int returnVal = val1 + val2;
	return returnVal;
}

int main() {
	int x = 15;
	int y = 20;

	int* i = &x;
	int* k = &y;

	std::cout << sum(i, k) << std::endl;
	std::cout << sum(&x, &y) << std::endl;
	return 0;
}