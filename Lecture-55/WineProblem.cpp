#include <iostream>
#include <vector>
using namespace std;

int solve(int *wine , int l, int r, int day, vector<vector<int> > &dp) {
	// base case
	if (l > r) {
		return dp[l][r] = 0;
	}
	if (dp[l][r] != -1) {
		return dp[l][r];
	}
	// recursive case
	int op1 = wine[l] * day + solve(wine, l + 1, r, day + 1, dp);
	int op2 = wine[r] * day + solve(wine, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int wine[], int n) {
	vector<vector<int> > dp(n + 1, vector<int>(n + 1, 0));

	for (int i = n - 1; i >= 0 ; --i)
	{
		for (int j = i; j < n; ++j)
		{
			int cd = n - j + i;
			if (i == j) {
				dp[i][j] = cd * wine[i];
			}
			else if (i < j) {
				dp[i][j] = max(
				               wine[i] * cd + dp[i + 1][j],
				               wine[j] * cd + dp[i][j - 1]
				           );
			}
		}
	}

	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[0][n - 1];
}


int main() {

	int wine[] = {2, 3, 5, 1, 4};
	int n = sizeof(wine) / sizeof(int);

	vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1));

	cout << solve(wine, 0, n - 1, 1, dp) << endl;
	cout << bottomUp(wine, n) << endl;

	return 0;
}
















