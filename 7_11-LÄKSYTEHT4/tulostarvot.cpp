#include <iostream>

void tulosta_arvot(const int* t, int n) {
	const int* lastpoint = t + n;
	for (const int* ptr = t; ptr < lastpoint; ptr++) std::cout << *ptr << std::endl;
}

int main() {
	int n = 4;
	int* t = new int[n];
	for (int i = 0; i < n; i++) t[i] = i+1;
	tulosta_arvot(t, n);

	return 0;
}