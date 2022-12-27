#include <iostream>
using namespace std;
#define ll long long

const ll mx = 1e15;

bool kyaPossibleHai(ll *cooks, ll n, ll paranthas, ll time_given) {

	for (ll i = 0; i < n; ++i)
	{
		ll r = cooks[i];
		ll mul = 1;
		ll current_time = 0;
		while (current_time + mul * r <= time_given) {
			current_time += mul * r;
			mul++;
			paranthas--;
			if (paranthas == 0) return true;
		}
	}
	return false;
}

ll murthalParantha(ll *cooks, ll n, ll paranthas) {
	ll s = 0, e = mx;
	ll ans = mx;

	while (s <= e) {
		ll mid = (s + e) / 2;
		if (kyaPossibleHai(cooks, n, paranthas, mid)) {
			ans = min(ans, mid);
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;
}

int main() {

	ll cooks[100005], n, paranthas;
	cin >> paranthas >> n;
	for (int i = 0; i < n; ++i) cin >> cooks[i];

	cout << murthalParantha(cooks, n, paranthas) << endl;

	return 0;
}
















