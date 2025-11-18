#include <iostream>
#include <string>

class Eläin {
public:
	Eläin() {
		std::cout << "Olen eläin!\n";
	}
};

class Kissa : Eläin {
public:
	Kissa() {
		std::cout << "meow!\n";
	}
};

class Koira : Eläin {
public:
	Koira() {
		std::cout << "woof!\n";
	}
};

int main() {
	Kissa kissa;
	Koira koira;
	Eläin eläin;
	return 0;
}