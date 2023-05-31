#include <iostream>
#include <cstring>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll dp[100005], pre[100005];
ll t, k, a, b;

ll flowers(ll len, ll k) {
	// base case
	if (len == 0) return 1;
	if (dp[len] != -1) return dp[len];
	// recursive case
	ll op1 = 0, op2 = 0;
	// Red flower rakhlo
	op1 = flowers(len - 1, k);
	// White flowers rakhlo
	if (len >= k) {
		op2 = flowers(len - k, k);
	}
	return dp[len] = (op1 + op2) % mod;
}

void preCompute() {
	pre[0] = 0;
	memset(dp, -1, sizeof dp);
	for (int i = 1; i <= 100000; ++i)
	{
		pre[i] = pre[i - 1] + flowers(i, k);
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> t;
	cin >> k;
	preCompute();

	while (t--) {
		cin >> a >> b;
		cout << (pre[b] - pre[a - 1]) % mod << endl;
	}


	return 0;
}























