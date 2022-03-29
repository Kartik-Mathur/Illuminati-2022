// SumofN.cpp
#include <iostream>
using namespace std;

int main() {

	int n, sum;
	cin >> n;
	sum = 0;
	int no = 1;
	while (no <= n) { // Condition check
		// work
		sum = sum + no;
		no = no + 1; // Updation
	}

	cout << "Sum: " << sum << endl;

	return 0;
}
















