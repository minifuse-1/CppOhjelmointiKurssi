#include <iostream>

int n = 5;
int* t = new int[n];

void tulosta_arvot() {
	int* lastpoint = t + n;
	for (int* ptr = t; ptr < lastpoint; ptr++) std::cout << *ptr << std::endl;
}

void lue_arvot() {
	for (int i = 0; i < n; i++) std::cin >> t[i];
}

void kaanna() {

	int* ptrfirst = t;
	int* ptrlast = t + n - 1;

	while (ptrfirst < ptrlast) {
		int temp = *ptrfirst;
		*ptrfirst = *ptrlast;
		*ptrlast = temp;

		ptrfirst++;
		ptrlast--;
	}
}

int main() {
	std::cout << "laita arvot: " << std::endl;
	lue_arvot();
	kaanna();
	std::cout << "Tulos: " << std::endl;
	tulosta_arvot();

	delete[] t;
	return 0;
}