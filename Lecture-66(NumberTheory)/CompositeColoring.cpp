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
#define w(t) int t;cin>>t;while(t--)
#define AS 200001
#define mod 1000000007
ll n;
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void compositeColoring() {
	vector<int> a(n, -1);

	int color = 1;

	vector<int> ans(n, -1);
	for (int i = 0; i < n; ++i) cin >> a[i];

	for (auto p : primes) {
		bool flag = false;
		for (int i = 0; i < n ; i++) {
			if (ans[i] != -1) continue;
			if (a[i] % p == 0) ans[i] = color, flag = true;
		}
		if (flag)
			color++;
	}
	cout << --color << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
}

void solve() {
	w(t) {
		cin >> n;
		compositeColoring();
	}
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











