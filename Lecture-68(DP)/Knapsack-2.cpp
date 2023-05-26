#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <deque>
#include <bitset>
#include <climits>
#include <cstdio>
#include <list>
#include <iomanip>
using namespace std;

#define ll long long int
#define new(a,n) ll*a = new ll[n]
#define new1(a,n,m) ll**a = new ll*[n]; for(ll i = 0 ; i < n ; i++) a[i] = new ll[m];
#define mp make_pair
#define pb push_back
#define fi first
#define pii pair<ll,ll>
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define init(a,n,v) for(int i = 0 ; i <n ; i++) a[i]=v;
#define init2(a,n,m,v) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){a[i][j]=v;}}
#define AS 200001
#define mod 1000000007
#define inf 1e12

ll N, W;
ll price[102], wt[102];
ll max_profit = 0;


void solve() {
	cin >> N >> W;
	for (int i = 0; i < N; ++i)
	{
		cin >> wt[i] >> price[i];
		max_profit += price[i];
	}

	vector<vector<ll> > dp(N + 1, vector<ll>(max_profit + 1));

	for (int n = 0; n <= N; ++n)
	{
		for (int profit = 0; profit <= max_profit; ++profit)
		{
			if (n == 0 and profit == 0) {
				dp[n][profit] = 0;
			}
			else if (n == 0) dp[n][profit] = inf;
			else if (price[n - 1] <= profit) {
				ll op1 = wt[n - 1] + dp[n - 1][profit - price[n - 1]];
				ll op2 = dp[n - 1][profit];
				dp[n][profit] = min(op1, op2);
			}
			else dp[n][profit] = dp[n - 1][profit];
		}
	}

	ll ans = 0;
	for (int i = 1; i <= max_profit; ++i)
	{
		if (dp[N][i] <= W) ans = i;
	}
	cout << ans << endl;
}

int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;
}











