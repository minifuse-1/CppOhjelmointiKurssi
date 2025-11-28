#pragma once

template <typename T>
void SortArray(T array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-i; j++) {
			if (array[j] > array[j+1]) {
				T temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	
}