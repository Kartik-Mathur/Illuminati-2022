// PrintReverse.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << '\n';


	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << '\n';

	return 0;
}
















