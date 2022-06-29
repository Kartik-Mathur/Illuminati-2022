// MergeSort.cpp
#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e) {
	int m = (s + e) / 2;
	int k = s, i = s, j = m + 1;

	while (i <= m and j <= e) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}
	while (i <= m) {
		a[k++] = b[i++];
	}
	while (j <= e) {
		a[k++] = c[j++];
	}
}

void MergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}

	// recursive case
	int m = (s + e) / 2;
	int b[100], c[100];
	// 1. Divide
	// s se lekar m tak jitne elements hai b[] mei copy krdo
	for (int i = s; i <= m; ++i)
	{
		b[i] = a[i];
	}

	// m+1 se lekar e tak saare elements c[] mei copy kardo
	for (int i = m + 1; i <= e; ++i)
	{
		c[i] = a[i];
	}

	// 2. Sort the small arrays b[] and c[]
	MergeSort(b, s, m);
	MergeSort(c, m + 1, e);

	// 3. Merge sorted arrays
	merge(a, b, c, s, e);
}

int main() {

	int a[] = {8, 7, 5, 4, 6, 3, 1, 2};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	MergeSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















