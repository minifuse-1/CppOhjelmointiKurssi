#include <iostream>
int x = 10;

void increment() {
	x += 3;
}

void print() {
	std::cout << x << std::endl;
}

int main() {	
	increment();
	print();
	return 0;
}