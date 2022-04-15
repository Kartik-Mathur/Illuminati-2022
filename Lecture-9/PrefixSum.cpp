// PrefixSum.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 2, 3, 5};
	int n = sizeof(a) / sizeof(int);
	int csum[100] = {0};

	csum[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		csum[i] = a[i] + csum[i - 1];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << csum[i] << " ";
	}
	cout << '\n';

	return 0;
}
















