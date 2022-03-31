// PrintAllPrimes.cpp
// CheckPrime - Break.cpp
#include <iostream>
using namespace std;

int main() {

	int no, i, n;
	cin >> n;

	for (int no = 2; no <= n; ++no)
	{
		for (i = 2 ; i <= no - 1 ; i++) {
			if (no % i == 0) {
				break;
			}
		}

		if (i == no) {
			cout << no << " ";
		}
	}


	cout << endl;
	return 0;
}
















