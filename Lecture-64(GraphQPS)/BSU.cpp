// BSU.cpp
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

ll n, k;
vector<ll> KaunseCoursesKrneHai;
vector<ll> g[100005];
vector<ll> ans;
int courseKiaHuaHai[100005] = {0};

bool isCyclic = false;

void tps(ll course) {
	// ya toh course kia hoga
	if (courseKiaHuaHai[course] == 2) {
		return;
	}
	courseKiaHuaHai[course] = 1; // currently, yeh course
	// chal rha hai

	// Pehle aap iske saare child wale course karo
	// last mei yeh wala course hoga,
	// but agar ek abhi recent mei kia hua course
	// dobara krne ki try krey toh mtlb cycle hai
	for (auto dependentCourse : g[course]) {
		if (courseKiaHuaHai[dependentCourse] == 1) {
			isCyclic = true;
			return;
		}
		tps(dependentCourse);
	}
	courseKiaHuaHai[course] = 2; // yeh course pehle ho chuka hai
	// mark karo and answer mei store krlo
	ans.pb(course);
}

void bsu() {

	for (auto course : KaunseCoursesKrneHai) {
		tps(course);
		if (isCyclic) break;
	}

	if (isCyclic) {
		cout << "-1\n";
		return;
	}
	cout << ans.size() << endl;
	for (auto x : ans) {
		cout << x << " ";
	}
	cout << endl;
}


void solve() {
	cin >> n >> k;

	for (ll i = 0; i < k; ++i)
	{
		ll x;
		cin >> x;
		KaunseCoursesKrneHai.pb(x);
	}

	for (ll u = 1; u <= n; ++u)
	{
		ll numberOfCourses;
		cin >> numberOfCourses;
		if (numberOfCourses == 0) continue;

		for (int i = 0; i < numberOfCourses; ++i)
		{
			ll v;
			cin >> v;
			g[u].pb(v);
		}
	}

	bsu();

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











