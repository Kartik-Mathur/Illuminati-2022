// SuffixSum.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 2, 3, 5};
	int n = sizeof(a) / sizeof(int);
	int csum[100] = {0};

	csum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		csum[i] = csum[i + 1] + a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << csum[i] << " ";
	}
	cout << '\n';

	return 0;
}
















