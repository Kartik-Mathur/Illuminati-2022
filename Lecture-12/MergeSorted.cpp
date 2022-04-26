// MergeSorted.cpp
#include <iostream>
using namespace std;

void print(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';
}

void MergeSorted(int a[], int b[], int m, int n) {
	int i = m - 1;
	int j = n - 1;

	int k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k] = a[i];
			k--;
			i--;
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

int main() {

	int a[13] = { -11, -10, -9, 0, 2, 4, 6, 8};
	int b[5] = { -8, -7, 1, 3, 5};

	int m = 8;
	int n = 5;

	MergeSorted(a, b, m, n);
	print(a, m + n);
	print(b, n);


	return 0;
}
















