#include <iostream>
using namespace std;

int main() {

	int a, b, c, i, n;
	cout << "Enter n(greater than 3): ";
	cin >> n;
	a = 1;
	b = 1;
	c = a + b;

	i = 1;
	while (i <= n - 3) {
		// Work
		a = b;
		b = c;
		c = a + b;

		i = i + 1;
	}

	cout << n << "th term is: " << c << endl;



	return 0;
}
















