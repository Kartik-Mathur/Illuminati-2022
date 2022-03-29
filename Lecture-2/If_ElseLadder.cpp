// If_ElseLadder.cpp
#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	if (a >= 0 && a < 10) {
		cout << "Hello" << endl;
	}
	else if (a >= 10 && a < 20) {
		cout << "World" << endl;
	}
	else if (a >= 20 && a < 30) {
		cout << "Hello World" << endl;
	}
	else {
		cout << "Coding Blocks" << endl;
	}

	return 0;
}
















