// PrintEvenIndex.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	for (int i = 1; i < n; i = i + 2)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















