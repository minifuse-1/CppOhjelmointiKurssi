#include <iostream>
#include <string>
#include "ajoneuvo.h"


int main() {
	Ajoneuvo* ajoneuvo = new Ajoneuvo(120, 1952, 1000);
	Ajoneuvo* yksiauto = new Auto(140, 2005, 922, 4, 4);
	Ajoneuvo* henkiloauto = new HenkilöAuto(250, 2025, 600, 4, 4, 5);
	Ajoneuvo* kuormaauto = new KuormaAuto(124, 1999, 1200, 2, 18, 800);
	Ajoneuvo* boat = new Laiva(82, 1923, 2000, 0, 0, 9999999);
	Ajoneuvo* lentokone = new Lentokone(522, 2025, 950, 1, 3, 5000);
	delete ajoneuvo;
	delete yksiauto;
	delete henkiloauto;
	delete kuormaauto;
	delete boat;
	delete lentokone;
	return 0;
}