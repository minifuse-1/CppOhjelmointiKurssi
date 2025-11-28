#include <iostream>
#include "taulukko.h"


int main() {
	int taulu[5] = {1, 50, 2, 3, 5};
	SortArray<int>(taulu, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << taulu[i] << std::endl;
	}
	return 0;
}