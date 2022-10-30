// NStairs.cpp
#include <iostream>
#include <vector>
using namespace std;

int NStairs(int n, int k, int *dp) {
	// base case
	if (n == 0) {
		return dp[n] = 1;
	}

	if (n < 0) {
		return 0;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	// recursive case
	int ans =  0;
	for (int i = 1; i <= k; ++i)
	{
		ans += NStairs(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	vector<int> dp(n + 1, 0);
	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			if (i - j >= 0) {
				dp[i] += dp[i - j];
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}

int FastStairs(int n, int k) {
	vector<int> dp(n + 1, 0);
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		if (i - k - 1 >= 0) {
			dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
		}
		else {
			dp[i] = 2 * dp[i - 1];
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}

int main() {

	int n, k;
	cin >> n >> k;
	int dp[100000];
	memset(dp, -1, sizeof dp);

	cout << NStairs(n, k, dp) << endl;
	int ans = bottomUp(n, k);
	cout << ans << endl;
	cout << FastStairs(n, k) << endl;

	return 0;
}
















