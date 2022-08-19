// auto.cpp
#include <iostream>
using namespace std;

int main() {
	// auto will figure out the data type on its own,
	// auto z; This will not work because z is not getting any value, thus we cannot
	// figure out the datatype: ERROR
	// auto z;
	float x = 10.11;
	auto y = 11.11;

	cout << x << " " << y << endl;

	return 0;
}
















