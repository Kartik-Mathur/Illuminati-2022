#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int minchange(int *denom, int n, int amt, vector<int> &dp)
{
    // base case
    if (amt == 0)
    {
        return dp[amt] = 0;
    }

    if (dp[amt] != -1)
    {
        return dp[amt];
    }

    // rec case
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (amt >= denom[i])
        {
            int choti_amt = amt - denom[i];
            int x = minchange(denom, n, choti_amt, dp);
            if (x != INT_MAX)
            {
                ans = min(ans, x + 1);
            }
        }
    }
    return dp[amt] = ans;
}


int main()
{
    int denom[] = {1, 7, 10, 20, 30};
    int n = sizeof(denom) / sizeof(int);
    // vector<int> dp(amt+1,-1);
    // memset(dp, -1, sizeof(dp));
    // for (int i = 0; i < sizeof(dp); i++)
    // {
    //     dp[i] = -1;
    // }
    int amt;
    cin >> amt;
    vector<int> dp(amt + 1, -1);
    cout << minchange(denom, n, amt, dp) << endl;

    return 0;
}