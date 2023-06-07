#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 3, 3, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int *p = upper_bound(a, a + n, 3);

	*p = 20;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;




	return 0;
}
















