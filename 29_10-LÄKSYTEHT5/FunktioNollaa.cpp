#include <iostream>

void clearArray(int* tauluAlku, int alkiot) { // Alkiot tarvitaan, koska ei päästä käsiksi itse taulukon sisältöön pelkällä osoittimella yhteen muistipaikkaan jolloin ei voida katsoa kuinka monta alkiota siellä on
	// - Jatkoa, Ellei haluttaisi funktioon viedä parametrinä vielä itse taulukkoa.
	for (int i = 0; i < alkiot; i++) {
		*tauluAlku = 0;
		tauluAlku++;
	}
}

int main() {
	int taulu[4] = {0, 6, 32, 9};
	int* alku = &taulu[0];

	for (int i = 0; i < 4; i++) {
		std::cout << taulu[i] << std::endl;
	}

	std::cout << " " << std::endl;
	clearArray(alku, 4);

	for (int i = 0; i < 4; i++) {
		std::cout << taulu[i] << std::endl;
	}
	return 0;
}