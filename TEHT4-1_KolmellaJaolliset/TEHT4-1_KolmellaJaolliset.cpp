#include <iostream>
#include <string>

int main() {
	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0) {
			std::cout << std::to_string(i) << std::endl;
		}
	}
	return 0;
}

