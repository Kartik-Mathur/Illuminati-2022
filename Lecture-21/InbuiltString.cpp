// InbuiltString.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// char a[] = "Hello World";
	// cout << strlen(a) << endl;

	// char b[100] = "Learing Strings";
	// strcat(b, a); // b ke andar a ko bhi add kardo
	// cout << b << endl;

	// To copy one string to another, b ke andar a copy hoga
	// strcpy(b, a);
	char a[] = "zello";
	char b[] = "Zsadfafafasdasello";
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	if (strcmp(a, b) < 0) {
		cout << "a is smaller than b" << endl;
	}
	if (strcmp(a, b) == 0) {
		cout << "a is equals to b" << endl;
	}
	if (strcmp(a, b) > 0) {
		cout << "a is greater than b" << endl;

	}

	return 0;
}
















