#pragma once

template <class T, int maxSize>
class Stack {
private: 
	T values[maxSize] = {};
	T empty{};
	int stack_size = 0;
public:
	void Push(T input) {
		values[stack_size] = input;
		stack_size++;
	}

	T Pop() {
		stack_size--;
		T value = values[stack_size];
		values[stack_size] = empty;
		return value;
	}

	int Size() const {
		return stack_size;
	}
};