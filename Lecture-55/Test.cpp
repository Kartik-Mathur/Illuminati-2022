#include <iostream>
#include <vector>
using namespace std;

int minCoins(int *deno, int n, int amt, int *dp) {
	// base case
	if (amt == 0) {
		return dp[amt] = 0;
	}

	if (dp[amt] != -1) {
		return dp[amt];
	}

	// recursive case
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int choti_amt =  amt - deno[i];
			int x =  minCoins(deno, n, choti_amt, dp);
			if (x != INT_MAX) {
				ans = min(ans, x + 1);
			}
		}
	}
	return dp[amt] = ans;
}

int bottomUp(int *deno, int n, int totalAmt) {
	vector<int> dp(totalAmt + 1, INT_MAX);
	dp[0] = 0;

	for (int amt = 1; amt <= totalAmt; ++amt)
	{
		// lets solve it for some amount "amt"
		for (int i = 0; i < n; ++i)
		{
			if (amt >= deno[i]) {
				int choti_amt = amt - deno[i];
				int x = dp[choti_amt];
				if (x != INT_MAX) {
					dp[amt] = min(dp[amt], x + 1);
				}
			}
		}
	}

	for (int i = 0; i <= totalAmt; ++i)
	{
		cout << dp[i] << " ";
	}
	return dp[totalAmt];
}

int main() {

	int deno[] = {1, 7, 10};
	int n = sizeof(deno) / sizeof(int);

	int amt;
	cin >> amt;

	int dp[100000];
	memset(dp, -1, sizeof dp);
	int x = bottomUp(deno, n, amt);
	cout << "\nBottom Up: " << x << endl;
	cout << "Top Down: " << minCoins(deno, n, amt, dp) << endl;

	return 0;
}
















