#include <iostream>
using namespace std;

int knapsack(int *price, int *wt, int cap, int n, int dp[][100]) {
	// base case
	if (cap == 0 || n == 0) {
		return dp[cap][n] = 0;
	}
	if (dp[cap][n] != -1) {
		return dp[cap][n];
	}

	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;
	if (wt[n - 1] <= cap) {
		op1 = price[n - 1] + knapsack(price, wt, cap - wt[n - 1], n - 1, dp);
	}
	op2 = 0 + knapsack(price, wt, cap, n - 1, dp);
	return dp[cap][n] = max(op1, op2);
}

int bottomUp(int *price, int* wt, int N, int capacity) {
	int dp[100][100] = {0};
	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1, op2;
			op1 = op2 = INT_MIN;
			if (cap >= wt[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
			}
			op2 = dp[n - 1][cap];
			dp[n][cap] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			cout << dp[n][cap] << " ";
		}
		cout << endl;
	}
	return dp[N][capacity];
}

int main() {

	int price[] = {5, 5, 8, 7};
	int wt[] = {3, 3, 5, 6};
	int capacity = 6;
	int n = sizeof(price) / sizeof(int);
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << knapsack(price, wt, capacity, n, dp) << endl;
	cout << bottomUp(price, wt, n, capacity) << endl;
	return 0;
}
















