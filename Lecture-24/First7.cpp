// First7.cpp
#include <iostream>
using namespace std;

int First7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursive case
	if (a[i] == 7) {
		return i;
	}
	int Chota_Ans = First7(a, n, i + 1);
	return Chota_Ans;
}

int main() {

	int a[] = {1, 2, 5, 7, 6, 5, 4, 7, 8, 9, 10, 7};
	int n = sizeof(a) / sizeof(int);
	int ans = First7(a, n, 0);

	cout << ans << endl;
	return 0;
}
















