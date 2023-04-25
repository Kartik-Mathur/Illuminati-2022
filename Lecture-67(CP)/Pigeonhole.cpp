#include <iostream>
using namespace std;
#define ll long long

ll solve(ll *a, ll n) {

	ll *freq = new ll[n];
	memset(freq, 0, n);

	ll csum = 0;
	freq[0]++;

	for (int i = 0; i < n; ++i)
	{
		csum += a[i];
		csum %= n;
		csum = (csum + n) % n;
		freq[csum]++;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;
	ll ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += (freq[i]) * (freq[i] - 1) / 2;
	}

	return ans;
}


int main() {

	ll a[100000];
	ll n;
	ll t;
	cin >> t;

	while (t--) {

		cin >> n;
		for (int i = 0; i < n; ++i) cin >> a[i];
		cout << solve(a, n) << endl;

	}

	return 0;
}


















