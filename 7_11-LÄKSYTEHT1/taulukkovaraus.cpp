#include <iostream>

int* varaa_taulukko(int n) {
	int* t = new int[n];
	return t;
}

int main() {
	int n = 5;
	int* t = varaa_taulukko(n);
	for (int i = 0; i < n; i++) t[i] = i+1;
	for (int i = 0; i < n; i++) std::cout << t[i];
	return 0;
}