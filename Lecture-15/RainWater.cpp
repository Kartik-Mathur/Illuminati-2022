// RainWater.cpp
#include <iostream>
#include <vector>
using namespace std;

int RainWater(vector<int> &a, int n) {
	vector<int> lm(n), rm(n);
	lm[0] = 0;
	int ans = a[0];
	for (int i = 1; i < n; ++i)
	{
		lm[i] = ans;
		ans = max(ans, a[i]);
	}

	rm[n - 1] = 0 ;
	ans = a[n - 1];
	for (int i = n - 2; i >= 0; --i)
	{
		rm[i] = ans;
		ans = max(ans, a[i]);
	}

	int water = 0;
	for (int i = 0; i < n; ++i)
	{
		int x = min(lm[i], rm[i]) - a[i];
		if (x > 0) {
			water += x;
		}
	}
	return water;
}

int main() {
	int test_cases;
	cin >> test_cases;

	for (int i = 0; i < test_cases; ++i)
	{

		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		cout << RainWater(a, n) << endl;
	}

	return 0;
}
















