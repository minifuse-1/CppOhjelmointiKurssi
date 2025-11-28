#include "stack.h"
#include <string>
int main() {
	Stack<int, 5> stack;
	stack.Push(5);
	stack.Push(10);
	stack.Push(250);
	stack.Pop();
	stack.Size();
	Stack<std::string, 5> stack2;
	stack2.Push("Jaakko");
	stack2.Push("Pertti");
	stack2.Push("Oliver");
	stack2.Pop();
	stack2.Size();
	return 0;
}