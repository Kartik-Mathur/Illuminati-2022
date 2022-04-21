// Scopes.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 1, b = 100;

	if (a > 0) {
		int a = 10;
		int b = 1100;
		a = a + 1;
		cout << a << endl;
		cout << b++ << endl;
	}

	cout << a << endl;
	cout << b++ << endl;
	cout << b << endl;


	return 0;
}
















