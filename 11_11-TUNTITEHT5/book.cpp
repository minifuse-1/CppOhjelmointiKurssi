#include <iostream>

class Book {
private:
	std::string _title;
	int _pages;
public:
	Book(std::string title, int pages) {
		_title = title;
		_pages = pages;
	}
	Book(Book &book) {
		_title = book._title;
		_pages = book._pages;
		std::cout << "Copy constructor called from book: ";
		std::cout << book._title;
	}
};

int main() {
	Book lotr("Lord of the rings", 582);
	Book hp = lotr;
	return 0;
}