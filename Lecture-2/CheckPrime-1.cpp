// CheckPrime - 1.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1, cnt = 0;
	while (i <= n) {
		if (n % i == 0) {
			cnt = cnt + 1;
		}

		i = i + 1;
	}

	if (cnt == 2) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}



	return 0;
}
















