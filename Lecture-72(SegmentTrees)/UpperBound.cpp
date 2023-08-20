#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 3, 3, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << lower_bound(a, a + n, 3) - a << endl;


	return 0;
}
















