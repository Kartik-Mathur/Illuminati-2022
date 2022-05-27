// ArraySorted.cpp
#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 0 || n == 1) {
		return true;
	}

	// recursive case
	if (a[0] <= a[1] && isSorted(a + 1, n - 1) == true) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	int a[] = {1, 4, 5, 8};
	int n = sizeof(a) / sizeof(int);

	bool ans = isSorted(a, n);
	if (ans == true) {
		cout << "Sorted" << endl;
	}
	else {
		cout << "Not Sorted" << endl;
	}

	return 0;
}
















