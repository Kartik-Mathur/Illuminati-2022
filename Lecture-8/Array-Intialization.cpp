// Array - Intialization.cpp
#include <iostream>
using namespace std;

int main() {
	// INVALID CHEEZ: int a[];, size batana jarrori hai
	// only in case of initialization we can skip the size
	// int a[] = {1, 2, 3, 4, 5};
	// or
	int a[5] = {1, 2, 3, 4, 5};

	int n = 5;
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << '\n';

	return 0;
}
















