#include <iostream>

void multiply(int* value) {
	*value = *value * 2;
	return;
}


int main() {
	int x = 5;
	multiply(&x);
	std::cout << x << std::endl;
	return 0;
}

