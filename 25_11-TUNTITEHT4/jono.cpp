#include <iostream>
#include <list>
#include <algorithm>
#include <string>

int main() {
	std::list<std::string> jono;
	std::string input = " ";
	while (true) {
		std::cin >> input;
		if (std::cin.get() == '\n' && input.size() == 0) break;
		jono.push_back(input);
	}

	for (std::string text : jono) {
		std::cout << text;
		jono.pop_front();
	}
	return 0;
}