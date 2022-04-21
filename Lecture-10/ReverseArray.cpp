// ReverseArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 3, 2, 1, 6, 7, 8};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';

	int i = 0, j = n - 1;
	while (i < j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';

	return 0;
}
















