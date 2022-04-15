// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 2, 3, 5};
	int n = sizeof(a) / sizeof(int);
	int key = 5, i;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Key Not Found" << endl;
	}

	return 0;
}
















