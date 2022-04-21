// SelectionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 2, 1, 3};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';

	for (int i = 0; i < n - 1; ++i)
	{
		// work
		int mi = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[mi]) {
				mi = j;
			}
		}
		swap(a[i], a[mi]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';

	return 0;
}
















