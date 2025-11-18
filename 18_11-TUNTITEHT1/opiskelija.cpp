#include <iostream>
#include <string>
class Henkilö {
public:
	std::string name;
	Henkilö() {
		name = "Jarkko";
	}
};
class Opiskelija : Henkilö {
public:
	int opiskelijaNumero;
	Opiskelija(std::string nameInput, int nro) {
		opiskelijaNumero = nro;
		name = nameInput;
	}

	std::string GetName() const {
		return name;
	}

	int GetStudentNumber() const {
		return opiskelijaNumero;
	}
};

int main() {
	Opiskelija opiskelija = Opiskelija("Jarkko", 1234);
	std::cout << opiskelija.GetStudentNumber();
	std::cout << opiskelija.GetName();
	return 0;
}