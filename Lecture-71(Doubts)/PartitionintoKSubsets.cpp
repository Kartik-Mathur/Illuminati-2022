class Solution {
public:

	bool solve(vector<int>& a, int k, int target, int i, int sum, int n, unordered_map<int, bool> &visited) {
		if (k == 1) {
			return true;
		}
		if (i == n) return false;
		if (target == sum) return solve(a, k - 1, target, 0, 0, n, visited);
		// recursive case

		if (!visited[i] and sum + a[i] <= target) {
			visited[i] = true;
			bool solveHua = solve(a, k, target, i + 1, sum + a[i], n, visited);
			if (solveHua) return true;
			visited[i] = false;
		}
		bool solveHuaExclusion = solve(a, k, target, i + 1, sum, n, visited);
		if (solveHuaExclusion) return true;
		return false;

	}

	bool canPartitionKSubsets(vector<int>& a, int k) {
		unordered_map<int, bool> visited;
		int n;
		n = a.size();
		int sum = 0;
		for (auto &x : a) {
			sum += x;
		}

		if (sum % k != 0) return false;
		return solve(a, k, sum / k, 0, 0, n, visited);
	}
};

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

void solve() {

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











