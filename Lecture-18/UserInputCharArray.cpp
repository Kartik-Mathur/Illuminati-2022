// UserInputCharArray.cpp
#include <iostream>
using namespace std;

int main() {

	char a[100];
	// cin >> a;
	// cin ignores white spaces
	// cout << a << endl;

	// Syntax:
	// cin.getline(array_name, size, delimiter);
	cin.getline(a, 100); // by default delimiter is '\n'
	cout << a << endl;

	return 0;
}
















