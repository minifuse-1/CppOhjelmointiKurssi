#include <iostream>

// Uudellennimeä mainiksi jos haluat buildaa

int main5() {

	int vuosi;
	std::cout << "Anna vuosi: \n";
	std::cin >> vuosi;

	int remainder1;
	int remainder2;
	remainder1 = vuosi % 4;
	remainder2 = (vuosi % 100) + (vuosi % 400);

	if (remainder1 == 0 || remainder2 == 0) {
		std::cout << "Vuosi on karkausvuosi";
	}

	return 0;
}

