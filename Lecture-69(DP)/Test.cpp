class Solution {
public:

	unordered_map<string, bool> h;
	int dp[1001];
	bool solve(string &s, int i) {
		// base case
		if (i == s.size()) return true;
		if (dp[i] != -1) return dp[i];
		// recursive case
		for (int j = i; j < s.size(); ++j)
		{
			string choti = s.substr(i, j - i + 1);
			if (h.count(choti)) {
				bool choteiSolved = solve(s, j + 1);
				if (chotiSolved) return dp[i] = true;
			}
		}
		return dp[i] = false;
	}

	bool wordBreak(string s, vector<string>& wordDict) {
		memset(dp, -1, sizeof dp);
		for (auto w : wordDict) {
			h[w] = true;
		}

		return solve(s, 0);
	}
};