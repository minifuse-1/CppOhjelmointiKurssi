#include <iostream>
#include "funktiot.h"
extern int x;

void increment() {
	x += 3;
}

void print() {
	std::cout << x << std::endl;
}