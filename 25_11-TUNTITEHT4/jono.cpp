#include <iostream>
#include <list>
#include <algorithm>
#include <string>

int main() {
	std::list<std::string> jono;
	std::string input = " ";
	while (input != "") {
		std::getline(std::cin, input);
		jono.push_back(input);
	}

	while (!jono.empty()) {
		std::cout << jono.front() << std::endl;
		jono.pop_front();
	}
	return 0;
}