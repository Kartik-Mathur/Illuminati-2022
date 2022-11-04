#include <iostream>
using namespace std;

int minCost(int cost[][4], int i, int j, int dp[][100]) {
	// base case
	if (i == 0 and j == 0) return dp[i][j] = cost[i][j];
	if (i < 0 || j < 0) return INT_MAX;

	if (dp[i][j] != -1) return dp[i][j];

	// recursive case
	return dp[i][j] = min(
	                      minCost(cost, i - 1, j, dp),
	                      minCost(cost, i, j - 1, dp)
	                  ) + cost[i][j];
}

int bottomUp(int cost[][4], int n, int m) {
	// base case
	int dp[100][100] = {0};

	// recursive case
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0 and j == 0) {
				dp[i][j] = cost[i][j];
			}
			else {
				dp[i][j] =
				    min((i - 1 >= 0) ? dp[i - 1][j] : INT_MAX,
				        (j - 1 >= 0) ? dp[i][j - 1] : INT_MAX)
				    + cost[i][j];
			}
		}
	}

	// for (int i = 0; i <= n; ++i)
	// {
	// 	for (int j = 0; j <= m; ++j)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	return dp[n][m];
}

int main() {

	int cost[][4] = {
		{1, 1, 5, 3},
		{2, 1, 1, 6},
		{9, 8, 1, 1},
		{7, 3, 11, 1}
	};
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << minCost(cost, 3, 3, dp) << endl;
	cout << bottomUp(cost, 3, 3) << endl;
	return 0;
}
















