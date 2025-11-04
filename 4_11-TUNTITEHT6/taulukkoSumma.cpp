#include <iostream>

int arraySum(int* start, int  size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += start[i];
	}
	return sum;
}

int main() {

	int size = 3;
	int* t = new int[size];
	for (int i = 0; i < size; i++) t[i] = i;
	std::cout << arraySum(t, size);
	delete[] t;
	return 0;
}