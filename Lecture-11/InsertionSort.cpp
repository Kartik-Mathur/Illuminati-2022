// InsertionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 5, 4, 3, 6, 7, 9, 0};
	int n = sizeof(a) / sizeof(int);
	int j;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << endl;
	// Insertion Sort
	for (int i = 1; i < n; ++i)
	{
		int hpc = a[i];
		for (j = i - 1; j >= 0 ; --j)
		{
			if (a[j] > hpc) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}
		a[j + 1] = hpc;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << endl;



	return 0;
}
















