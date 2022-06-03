// Last7.cpp
#include <iostream>
using namespace std;

int Last7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		int indx = i;
		int aage_indx = Last7(a, n, i + 1);
		if (aage_indx > indx) {
			return aage_indx;
		}
		else {
			return indx;
		}
	}

	int ans = Last7(a, n, i + 1);
	return ans;
}

int main() {
	int a[] = {1, 2, 5, 7, 6, 5, 4, 7, 8, 9, 10, 7};
	int n = sizeof(a) / sizeof(int);
	int ans = Last7(a, n, 0);
	cout << ans << endl;

	return 0;
}
















