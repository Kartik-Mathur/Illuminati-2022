// ncr.cpp
#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i;
	}
	return ans;
}

int ncr(int n, int r) {
	int f_n = factorial(n);
	int f_nr = factorial(n - r);
	int f_r = factorial(r);

	int ans = f_n / (f_nr * f_r);
	return ans;
}
int main() {

	cout << ncr(5, 2) << endl;


	return 0;
}
















