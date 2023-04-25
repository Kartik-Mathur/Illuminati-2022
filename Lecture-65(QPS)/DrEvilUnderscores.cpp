#include <iostream>
#include <vector>
using namespace std;
#define ll long long
ll n;

ll solve(vector<ll> a, ll bit) {
	// base case
	if (a.size() <= 0 || bit < 0) {
		return 0;
	}
	// recursive case
	vector<ll> zeros, ones;
	ll mask = (1 << bit);

	for (ll i = 0; i < a.size(); ++i)
	{
		if ((a[i]&mask) == 0) zeros.push_back(a[i]);
		else ones.push_back(a[i]);
	}

	if (zeros.size() == 0) {
		// MSB ko is case mei hum zero kar denge
		// because saare ke saare numbers mei
		// MSB-bits are ones
		return solve(ones, bit - 1) + 0;
	}
	if (ones.size() == 0) {
		return solve(zeros, bit - 1) + 0;
	}

	return min(solve(zeros, bit - 1),
	           solve(ones, bit - 1)) + (1 << bit);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> n;
	vector<ll> a(n);

	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << solve(a, 31) << endl;



	return 0;
}
















