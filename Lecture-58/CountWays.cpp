// CountWays.cpp
#include <iostream>
using namespace std;

int main() {

	int dp[100][100] = {0};
	int n = 4, m = 4;
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0 and j == 0) dp[i][j] = 1;
			else {
				dp[i][j] = ((i - 1 >= 0) ? dp[i - 1][j] : 0) +
				           ((j - 1 >= 0) ? dp[i][j - 1] : 0);
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

	return 0;
}
















