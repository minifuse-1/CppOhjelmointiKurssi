#include "horse.h"
#include <iostream>

int main() {
	Horse stable[5]{6, 12, 1, 5, 8};
	SortArray(stable, 5);
	for (int i = 0; i < 5; i++) {
		std::cout << stable[i].GetHoofSize() << std::endl; 
	}
	return 0;
}