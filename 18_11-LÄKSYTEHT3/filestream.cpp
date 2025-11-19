#include <fstream>
#include <iostream>
#include <string>
#include <deque>

class Writable {
public:
	virtual void writeState(const std::string& filename) = 0;
};

class Readable {
public:
	virtual void readState(const std::string& filename) = 0;
};

class Player : public Writable, public Readable {
private:
	int health;
	int moveSpeed;
public:
	Player() {
		health = 10;
		moveSpeed = 5;
	}
	void writeState(const std::string& filename) {
		std::deque<int> variables = { health, moveSpeed };
		std::ofstream file(filename);

		for (int variable : variables) {
			file << variable << std::endl;
		}

		file.close();
	}
	void readState(const std::string& filename) {
		std::deque<int> variables;
		std::ifstream file(filename);

		int variable;
		while (file >> variable) {
			variables.push_back(variable);
		}

		health = variables[0];
		moveSpeed = variables[1];

		// print values to console 
		for (int i = 0; i < variables.size(); i++) {
			std::cout << variables[i] << std::endl;
		}
		file.close();
	}
};

int main() {
	Player player;
	//player.writeState("save.txt");
	player.readState("save.txt");
	return 0;
}