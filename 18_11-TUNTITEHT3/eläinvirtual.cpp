#include <iostream>
#include <string>

class El‰in {
public:
	virtual void ‰‰ntele() = 0;
};

class Kissa : public El‰in {
public:
	void ‰‰ntele() {
		std::cout << "meow!\n";
	}
};

class Koira : public El‰in {
public:
	void ‰‰ntele() {
		std::cout << "woof!\n";
	}
};

int main() {
	Kissa kissa;
	kissa.‰‰ntele();
	Koira koira;
	koira.‰‰ntele();
	// El‰in el‰in; 
	// ei voi koska luokka on "abstrakti" ja sit‰ ei voi yritt‰‰ luoda suoraan
	// koska siin‰ on pure virtual funktiota jotka ei m‰‰rittele oliolle mit‰‰n t‰sm‰‰ toimintoa kutsuessa funktion
	return 0;
}