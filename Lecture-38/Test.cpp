#include <iostream>
using namespace std;

int main() {

	// int a[] = {1, 2, 2, 3, 3};
	int mod = 1e9 + 7;
	int a[100005];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int freq[100000] = {0};

	int x;
	int i = 0, j = 0, ans = 0;

	while (i < n and j < n) {
		int no = a[j];
		if (freq[no] > 0) {
			while (freq[no] > 0) {
				freq[a[i]]--;
				i++;
			}
		}
		else {
			freq[no]++;
			x = (j - i + 1);
			ans += (x % mod * (x + 1) % mod) / 2;
			ans %= mod;
			j++;
		}
	}

	cout << ans << endl;


	return 0;
}
















