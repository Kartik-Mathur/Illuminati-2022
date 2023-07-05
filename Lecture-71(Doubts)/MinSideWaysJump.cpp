class Solution {
public:

	int solve(int cl, int cp, int n, vector<int> &lane,
	          vector< vector<int> > &dp) {
		// base case
		if (cp == n) return dp[cl][cp] = 0;
		if (dp[cl][cp] != -1) return dp[cl][cp];
		// recursive case
		if (lane[cp + 1] != cl) return dp[cl][cp] = solve(cl, cp + 1, n, lane, dp);
		int ans = INT_MAX;
		for (int i = 1 ; i <= 3 ; i++) {
			if (i == cl || lane[cp] == i) continue;
			ans = min(ans, solve(i, cp, n, lane, dp) + 1);
		}
		return dp[cl][cp] = ans;
	}

	int minSideJumps(vector<int>& lane) {
		int n = lane.size();
		vector< vector<int> > dp(4, vector<int>(n, -1));
		return solve(2, 0, lane.size() - 1, lane, dp);
	}
};