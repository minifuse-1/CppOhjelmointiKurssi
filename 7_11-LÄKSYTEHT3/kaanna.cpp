#include <iostream>

void kaanna(int* t, int n) {

	int* ptrfirst = t;
	int* ptrlast = t + n - 1;

	while (ptrfirst < ptrlast) {
		int temp = *ptrfirst;
		*ptrfirst = *ptrlast;
		*ptrlast = temp;

		ptrfirst++;
		ptrlast--;
	}
}

int main() {
	int n = 4;
	int* t = new int[n];
	for (int i = 0; i < n; i++) t[i] = i;
	kaanna(t, n);
	for (int i = 0; i < n; i++) std::cout << t[i] << std::endl;
	return 0;
}