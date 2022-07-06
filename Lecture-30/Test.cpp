#include <iostream>
using namespace std;

int ElephantWays(int n, int m) {
	// base case
	if (n == 0 and m == 0) {
		return 1;
	}

	// recursive case
	int ans = 0;
	for (int k = 0; k < n; ++k)
	{
		ans += ElephantWays(k, m);
	}

	for (int k = 0; k < m; ++k)
	{
		ans += ElephantWays(n, k);
	}
	return ans;
}

int main() {
	int n, m;
	cin >> n >> m;

	cout << ElephantWays(n, m) << endl;


	return 0;
}
















