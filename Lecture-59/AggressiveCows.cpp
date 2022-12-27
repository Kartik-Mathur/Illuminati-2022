#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define ll long long

bool kyaPossibleHai(ll cows, ll *a, ll n, ll dist) {
	ll total_cows_placed = 1;
	ll prev_cow_placedAt = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] - prev_cow_placedAt >= dist) {
			total_cows_placed++;
			prev_cow_placedAt = a[i];
			if (total_cows_placed == cows) return true;
		}
	}
	return false;
}

ll aggressiveCows(ll cows, ll *a, ll n) {
	ll s = 0, e = a[n - 1];
	ll ans = 0;

	while (s <= e) {
		ll m = (s + e) / 2;
		if (kyaPossibleHai(cows, a, n, m)) {
			ans = max(ans, m);
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}
	return ans;
}

int main() {
	ll cows, a[100005], n, t;

	cin >> t;

	while (t--) {
		cin >> n >> cows;
		for (int i = 0; i < n; ++i) cin >> a[i];
		sort(a, a + n);

		cout << aggressiveCows(cows, a, n) << endl;
	}


	return 0;
}
















