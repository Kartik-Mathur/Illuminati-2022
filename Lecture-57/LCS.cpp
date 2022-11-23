#include <iostream>
#include <vector>
#define vii vector<vector<int> >
using namespace std;

int LCS(string &s1, string &s2, int n, int m, vii &dp) {
	// base case
	if (!n || !m) return dp[n][m] = 0;
	if (dp[n][m] != -1)  return dp[n][m];
	// recursive case
	if (s1[n - 1] != s2[m - 1]) {
		return dp[n][m] = max(LCS(s1, s2, n - 1, m, dp),
		                      LCS(s1, s2, n, m - 1, dp));
	}
	else {
		return dp[n][m] = LCS(s1, s2, n - 1, m - 1, dp) + 1;
	}
}

int bottomUp(string &s1, string& s2) {

	int n = s1.size(), m = s2.size();
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] != s2[j - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}

	return dp[n][m];
}

int main() {
	string s1 = "abcad", s2 = "abacd";
	int n = s1.size(), m = s2.size();
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));

	cout << LCS(s1, s2, n, m, dp) << endl;
	cout << bottomUp(s1, s2) << endl;
	return 0;
}
















