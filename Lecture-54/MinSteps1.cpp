// MinStepsTo1.cpp
#include <iostream>
#include <vector>
using namespace std;

int MinStepsTo1(int n) {
	if (n == 1) {
		return 0;
	}

	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	op1 = MinStepsTo1(n - 1);

	if (n % 2 == 0) {
		op2 = MinStepsTo1(n / 2);
	}

	if (n % 3 == 0) {
		op3 = MinStepsTo1(n / 3);
	}

	return min(op1, min(op2, op3)) + 1;
}

int topDown(int n, int dp[]) {
	if (n == 1) {
		return dp[n] = 0;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	op1 = topDown(n - 1, dp);

	if (n % 2 == 0) {
		op2 = topDown(n / 2, dp);
	}

	if (n % 3 == 0) {
		op3 = topDown(n / 3, dp);
	}

	return dp[n] = min(op1, min(op2, op3)) + 1;
}

int bottomUp(int n) {
	vector<int> dp(n + 1, 0);

	// for (int i = 2; i <= n; ++i)
	// {
	// 	int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;

	// 	op1 = dp[i - 1];
	// 	if (i % 2 == 0) op2 = dp[i / 2];
	// 	if (i % 3 == 0) op3 = dp[i / 3];
	// 	dp[i] = min(op1, min(op2, op3)) + 1;
	// }

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = min(dp[i - 1],
		            min(i % 2 == 0 ? dp[i / 2] : INT_MAX,
		                i % 3 == 0 ? dp[i / 3] : INT_MAX))
		        + 1;
	}

	return dp[n];
}

int main() {
	int  n;
	cin >> n;
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}
	cout  <<  topDown(n, dp) << endl;
	cout  <<  bottomUp (n) << endl;
	cout  <<  MinStepsTo1(n) << endl;
	// cout  <<  MinStepsTo1(10) << endl;

	return 0;
}
















