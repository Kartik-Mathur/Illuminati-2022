// MergeSortedArrays.cpp
#include <iostream>
using namespace std;

void MergeSortedArrays(int *a, int *b, int *c, int n, int m) {
	int i = 0, j = 0, k = 0;

	while (i < n and j < m) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}
	while (i < n) {
		a[k++] = b[i++];
	}
	while (j < m) {
		a[k++] = c[j++];
	}
}

int main() {

	int b[] = {1, 2, 4, 5, 7, 8};
	int c[] = {0, 3, 6, 9, 10};
	int n = sizeof(b) / sizeof(int);
	int m = sizeof(c) / sizeof(int);

	int a[100];

	MergeSortedArrays(a, b, c, n, m);

	for (int i = 0; i < n + m; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;





	return 0;
}
















