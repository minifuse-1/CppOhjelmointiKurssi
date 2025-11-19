#include <iostream>

class Laskutoimitus {
public:
	virtual double laske(double x, double y) = 0;
	virtual ~Laskutoimitus() {}
};

class Yhteenlasku : public Laskutoimitus {
public:
	double laske(double x, double y) {
		return x + y;
	}
};

class Kertolasku : public Laskutoimitus {
public:
	double laske(double x, double y) {
		return x * y;
	}
};


int main() {
	Laskutoimitus* lasku = new Yhteenlasku;
	std::cout << lasku->laske(2, 1) << std::endl; // kutsutaan yhteenlasku
	lasku = new Kertolasku;
	std::cout << lasku->laske(5, 2) << std::endl; // Kutsustaan kertolasku
	delete lasku;
	return 0;
}