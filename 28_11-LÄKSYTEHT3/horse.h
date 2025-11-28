#pragma once

template <typename T>
void SortArray(T* array, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				T temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

class Horse {
private:
	int hoof_size;
public:
	bool operator> (const Horse& rhs) const {
		return GetHoofSize() > rhs.GetHoofSize();
	}
	Horse(int hoof_size) {
		this->hoof_size = hoof_size;
	}
	int GetHoofSize() const {
		return hoof_size;
	}
};