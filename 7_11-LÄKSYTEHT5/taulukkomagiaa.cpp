#include <iostream>

void tulosta_arvot(const int* t, int n) {
	const int* lastpoint = t + n;
	for (const int* ptr = t; ptr < lastpoint; ptr++) std::cout << *ptr << std::endl;
}

void lue_arvot(int* t, int n) {
	for (int i = 0; i < n; i++) std::cin >> t[i];
}

int* varaa_taulukko(int n) {
	int* t = new int[n];
	return t;
}

void kaanna(int* t, int n) {

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
	int n;
	std::cout << "Taulukon koko: " << std::endl;
	std::cin >> n;
	int* t = varaa_taulukko(n);
	std::cout << "laita arvot: " << std::endl;
	lue_arvot(t, n);
	kaanna(t, n);
	std::cout << "Tulos: " << std::endl;
	tulosta_arvot(t, n);

	delete[] t;
	return 0;
}