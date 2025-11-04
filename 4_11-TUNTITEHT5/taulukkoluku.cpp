#include <iostream>

int main() {

	int size;
	std::cin >> size;
	int* t = new int[size];
	
	for (int i = 0; i < size; i++) t[i] = i;

	for (int i = 0; i < size; i++) std::cout << t[i];

	delete[] t;

	return 0;
}