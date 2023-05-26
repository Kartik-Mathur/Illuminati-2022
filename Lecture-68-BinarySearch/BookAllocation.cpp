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

ll t, n, books[1000], total_students;

bool padhPaaye(ll mid) {
	ll current_student = 1;
	ll current_pages = 0;

	for (int i = 0; i < n; ++i)
	{
		if ((current_pages + books[i]) <= mid) {
			current_pages += books[i];
		}
		else {
			current_student++;
			current_pages = books[i];

			if (current_student > total_students) {
				return false;
			}
		}
	}

	return true;
}


ll bookAllocation() {

	ll s = books[n - 1];
	ll e = 0;
	for (int i = 0; i < n; ++i)
	{
		e += books[i];
	}

	ll ans = 0;
	while (s <= e) {
		ll mid = (s + e) / 2;
		if (padhPaaye(mid)) {
			ans = mid;
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;
}

void solve() {

	cin >> t;

	while (t--) {
		cin >> n >> total_students;
		F(books, n);

		cout << bookAllocation() << endl;
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











