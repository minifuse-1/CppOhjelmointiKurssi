#include <iostream>
#include "taulukko.h"


int main() {
	int taulu[] = {1, 50, 2, 3, 5};
	int* ptr = taulu;
	SortArray(ptr, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << taulu[i] << std::endl;
	}
	return 0;
}