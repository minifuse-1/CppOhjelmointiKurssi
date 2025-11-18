#include <iostream>
#include <string>

class El‰in {
public:
	virtual void ‰‰ntele() = 0;
	virtual ~El‰in() {}
};

class Kissa : public El‰in {
public:
	void ‰‰ntele() {
		std::cout << "meow!\n";
	}
	~Kissa() {
		std::cout << "meooww! *surullinen\n";
	}
};

class Koira : public El‰in {
public:
	void ‰‰ntele() {
		std::cout << "woof!\n";
	}
	~Koira() {
		std::cout << "Koira deletoitu\n";
	}
};

int main() {
	El‰in* kissa2 = new Kissa();
	kissa2->‰‰ntele();
	delete kissa2;
	return 0;
}