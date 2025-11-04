#include <iostream>

class LinkedList {
public:
	int data;
	LinkedList* next;
};

void PrintList(const LinkedList* start) {
	while (start != nullptr) {
		std::cout << start->data << std::endl;
		start = start->next;
	}
}

LinkedList* AddToStart(LinkedList* start, int number) {
	LinkedList* s = new LinkedList;
	if (start == 0) {
		s->next = 0;
		s->data = number;
	}
	else {
		s->next = start;
		s->data = number;
	}
	return s;
}

int main() {
	LinkedList* s4 = new LinkedList;
	s4->data = 1; s4->next = 0;
	LinkedList* s3 = new LinkedList;
	s3->data = 2; s3->next = s4;
	LinkedList* s2 = new LinkedList;
	s2->data = 10; s2->next = s3;
	LinkedList* s1 = new LinkedList;
	s1->data = 3; s1->next = s2;
	LinkedList* head = s1;

	PrintList(head);
	std::cout << std::endl;
	head = AddToStart(head, 5);
	PrintList(head);

	return 0;
}