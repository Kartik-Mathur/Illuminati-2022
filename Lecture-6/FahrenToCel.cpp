// FahrenToCel.cpp
#include <iostream>
using namespace std;

int main() {

	int init_val, f_val, step, f, c ;
	cin >> init_val >> f_val >> step;

	for (f = init_val ; f <= f_val ; f = f + step) {
		// c = (5 / 9.0) * (f - 32);
		c = (5 ) * (f - 32) / 9;
		cout << f << " " << c << endl;
	}


	return 0;
}
















