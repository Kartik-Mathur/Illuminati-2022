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
ll n, m, k, s;
ll a[100001];
ll cost[100001][101];
// unordered_map<int, list<int> > g;
vector<ll> g[100005];

void Fair() {
	// memset(cost, -1, sizeof(cost));
	init2(cost, n, k, -1);
	// cout << "n: " << n << endl;
	// cout << "k: " << k << endl;

	for (int product = 1; product <= k; ++product)
	{
		// kaunse kaunse town ke pass current product hai,
		// us town mei us product ko lekar jaane ki cost is zero
		queue<ll> q;
		for (ll i = 1; i <= n ; i++) {
			if (a[i] == product) {
				// ith town tak yeh product lekar jaane ki cost is zero
				cost[i][product] = 0;
				q.push(i);
			}
		}

		// aap current product ko har town tak lekar jaane ki min cost kitni hai
		// yeh nikal lo
		while (!q.empty()) {
			ll node = q.front();
			q.pop();

			for (auto neighbours : g[node]) {
				if (cost[neighbours][product] == -1) {
					cost[neighbours][product] = cost[node][product] + 1;
					q.push(neighbours);
				}
			}
		}
	}

	// Calculating the answer
	// PNF1(cost, n, k);
	ll ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		ans = 0;
		sort(cost[i] + 1, cost[i] + k + 1);

		for (int j = 1 ; j <= s ; j++) {
			ans += cost[i][j];
		}
		cout << ans << " ";
	}
	// PNF1(cost, n, k);
	cout << endl;
}


void solve() {

	cin >> n >> m >> k >> s;
	for (ll i = 1; i <= n ; i++) {
		cin >> a[i];
	}

	for (ll i = 0 ; i < m ; i++) {
		ll u, v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	Fair();

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











