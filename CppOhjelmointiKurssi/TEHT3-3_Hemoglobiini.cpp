#include <iostream>
#include <string>

int main() {

	int bioSukupuoli; // 0 mies, 1 nainen, muut = määrittelemätön
	int globinArvo;

	std::cout << "Laita Numero (0 = mies, 1 = nainen) \n";
	std::cin >> bioSukupuoli;
	if (bioSukupuoli != 0 && bioSukupuoli != 1) {
		std::cout << "Sukupuoli määrittelemätön";
		return 0;
	}

	std::cout << "Laita Hemoglobiini arvo g/l : \n";
	std::cin >> globinArvo;

	if (bioSukupuoli == 0 && (globinArvo <= 134 || globinArvo >= 195)) {
		if (globinArvo <= 134) {
			std::cout << "Hemoglobiini arvot ovat alhaiset";
		}
		else if (globinArvo >= 195) {
			std::cout << "Hemoglobiini arvot ovat korkeat";
		}
	}
	else if (bioSukupuoli == 0 && (globinArvo >= 134 || globinArvo <= 195)) {
		std::cout << "Hemoglobiinin arvot normaalitasolla";
	}

	if (bioSukupuoli == 1 && (globinArvo <= 117 || globinArvo >= 175)) {
		if (globinArvo <= 117) {
			std::cout << "Hemoglobiini arvot ovat alhaiset";
		}
		else if (globinArvo >= 175) {
			std::cout << "Hemoglobiini arvot ovat korkeat";
		}
	}
	else if (bioSukupuoli == 1 && (globinArvo >= 117 || globinArvo <= 175)) {
		std::cout << "Hemoglobiini arvot ovat normaalitasolla";
	}

	return 0;
}