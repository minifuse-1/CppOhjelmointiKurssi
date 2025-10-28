#include <iostream>


int main() {
	int* pointer = nullptr;

	if (!pointer) {
		std::cout << "varoitus: pointer on null";
	}
	else {
		std::cout << *pointer;
	}
	
	return 0;
}
