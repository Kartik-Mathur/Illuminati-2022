class Solution {
public:
	int mod = 1e9 + 7;
	int power(int a, int n) {
		// base case
		if (n == 0) return 1;

		// recursive case
		long x = (power(a, n / 2)) % mod;
		x = (long)x * (long)x;
		x %= mod;
		if (n % 2 == 0) return x;
		else return (x * a) % mod;
	}

	int sumSubseqWidths(vector<int>& a) {
		int ans = 0;
		int n = a.size();
		sort(a.begin(), a.end());
		for (int i = 0; i < n; ++i)
		{
			long addition = ( (long)a[i] * (long)power(2, i) % mod) % mod;
			long subtract = ( (long)a[i] * (long)power(2, n - i - 1) % mod) % mod;
			ans += (addition - subtract);
			ans %= mod;
		}

		return ans;
	}
};