#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> lista;
	lista.push_back(2);
	lista.push_back(8);
	lista.push_back(4);
	for (int thing : lista) {
		std::cout << thing << std::endl;
	}
	int sum = 0;
	for (int thing : lista) {
		sum += thing;	
	}
	std::cout << (sum / lista.size());
	return 0;
}