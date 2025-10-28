#include <iostream>
int main() {
	int taulu[] = {12, 9, 3, 6, 10};
	int* tauluPointer = &taulu[0];

	for (int i = 0; i < 5; i++) {
		std::cout << *tauluPointer << std::endl;
		tauluPointer++;
	}

	return 0;
}