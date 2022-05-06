// DereferenceOperator.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr;
	aptr = &a;

	cout << "a: " << a << endl;
	cout << "aptr: " << aptr << endl;
	cout << "&a: " << &a << endl;
	cout << "*aptr: " << *aptr << endl;
	cout << "*&a: " << *(&a) << endl;

	return 0;
}
















