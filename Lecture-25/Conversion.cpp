// Conversion.cpp
#include <iostream>
using namespace std;

void solve(char *a, int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	a[n - 1] = (a[n - 1] ^ ' ');
	solve(a, n - 1);
}


int main() {

	char a[] = "HelloWoRlD";
	cout << a << endl;
	solve(a, strlen(a));
	cout << a << endl;

	return 0;
}
















