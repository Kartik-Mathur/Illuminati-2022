#include <iostream>
#include <vector>
using namespace std;
#define setVal(a,val,s) for (int i = 0; i < s; ++i)\
{\
	a[i] = val;\
}

int fibo(int n) {
	if (n <= 1)return n;

	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int *dp) {
	if (n <= 1) return dp[n] = n;
	//  Calculate karne se pehle check karlo
	if (dp[n] != -1) return dp[n];

	return dp[n] = topDown(n - 1, dp)
	               + topDown(n - 2, dp);
}

int bottomUp(int n) {
	vector<int> dp(n + 1);

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int fibonacci(int n) {
	int a = 0, b = 1, c;
	for (int i = 0; i <= n - 2; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


int main() {

	int n;
	cin >> n;
	int dp[10000];
	setVal(dp, -1, 10000);

	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibonacci(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















