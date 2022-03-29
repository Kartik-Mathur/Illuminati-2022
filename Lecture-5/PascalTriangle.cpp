// PascalTriangle.cpp
#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int i, prev, n, naya;
	n = 0;
	while ( n <= N) {
		// Work for every line n
		prev = 1;
		i = 1;
		cout << prev << '\t';
		while (i <= n)
		{
			naya = ( prev * (n - (i - 1)) ) / i;
			cout << naya << "\t";
			prev = naya;
			i = i + 1;
		}

		n = n + 1;
		cout << '\n';
	}


	return 0;
}
















