#include <iostream>

int length(char* pointertofirst) {
	int len = 0;
	while (*pointertofirst) {
		len++;
		pointertofirst++;
	}
	return len;
}

int main() {
	char mjono[] = "Hello there!";
	char* pointer = &mjono[0];

	std::cout << length(pointer);

	return 0;
}