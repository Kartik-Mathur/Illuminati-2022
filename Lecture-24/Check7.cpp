// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}
	// recursive case
	if (a[i] == 7) { // Ek ith bucket ka kaam hum kar lete hai
		return true;
	}

	// Baaki n-1 buckets par hum recursion ko bolte hai
	bool ans = Check7(a, n, i + 1);
	return ans;
}

int main() {

	int a[] = {1, 2, 5, 7, 6, 5, 4, 7, 8, 9, 10, 7};
	int n = sizeof(a) / sizeof(int);
	bool ans = Check7(a, n, 0);
	if (ans) {
		cout << "7 Present hai" << endl;
	}
	else {
		cout << "7 Present Nahi hai" << endl;
	}

	return 0;
}
















