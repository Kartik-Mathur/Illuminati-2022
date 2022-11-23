// EditDistance.cpp
#include <iostream>
#include <vector>
#define vii vector<vector<int> >
using namespace std;

int EditDistance(string &s1, string &s2, int n, int m, vii &dp) {
	if (!n) return dp[n][m] = m;
	if (!m) return dp[n][m] = n;
	if (dp[n][m] != -1)  return dp[n][m];
	if (s1[n - 1] != s2[m - 1])
		return dp[n][m] = min(EditDistance(s1, s2, n - 1, m, dp),
		                      min(EditDistance(s1, s2, n, m - 1, dp),
		                          EditDistance(s1, s2, n - 1, m - 1, dp))) + 1;
	else
		return dp[n][m] = EditDistance(s1, s2, n - 1, m - 1, dp);
}

int bottomUp(string& s1, string &s2) {
	int n = s1.size(), m = s2.size();
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0) dp[i][j] = j;
			else if (j == 0)dp[i][j] = i;
			else {
				if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = min(dp[i - 1][j],
					                    min(dp[i][j - 1],
					                        dp[i - 1][j - 1])
					                   ) + 1;
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n][m];
}

int main() {

	string s1 = "Satur", s2 = "Sun";
	int n = s1.size(), m = s2.size();
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));
	cout << EditDistance(s1, s2, s1.length(), s2.length(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;
	return 0;
}
















