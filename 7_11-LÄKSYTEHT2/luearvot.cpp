#include <iostream>

void lue_arvot(int* t, int n) {
	for (int i = 0; i < n; i++) std::cin >> t[i];
}

int main() {
	int n = 5;
	int* t = new int[n];
	lue_arvot(t, n);
	return 0;
}