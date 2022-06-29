#include <iostream>
using namespace std;

int SumOfArray(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	return SumOfArray(a, n - 1) + a[n - 1];
	// int chota_Sum = SumOfArray(a, n - 1);
	// int bada_Sum = chota_Sum + a[n - 1];
	// return bada_Sum;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << SumOfArray(a, n) << endl;

	return 0;
}
















