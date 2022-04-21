#include <iostream>
using namespace std;

int a = -100;
int main() {
	cout << a << endl;
	int a = 1;
	cout << a << endl;

	if (a > 0) {
		int a = 10;
		a = a + 1;
		cout << a << endl;
		cout << "Access global a " <<::a << endl;
		// scope resolution operator(::)
		// this will ignore all the scopes and will check
		// globally declared bucket

	}
	::a = ::a + 1;
	cout << a << endl;
	cout << "Access global a " <<::a << endl;

	return 0;
}
















