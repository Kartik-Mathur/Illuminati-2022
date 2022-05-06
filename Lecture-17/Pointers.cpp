// Pointers.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr = &a;

	float f = 10.11;
	float *fptr;
	fptr = &f;

	char ch = 'A';
	char * chptr = &ch;

	cout << "ch: " << ch << endl;
	cout << "&ch: " << (float*)&ch << endl;
	cout << "chptr: " << (int*)chptr << endl;

	// cout << "a: " << a << endl;
	// cout << "&a: " << &a << endl;
	// cout << "aptr: " << aptr << endl << endl;

	// cout << "f: " << f << endl;
	// cout << "&f: " << &f << endl;
	// cout << "fptr: " << fptr << endl;



	return 0;
}
















