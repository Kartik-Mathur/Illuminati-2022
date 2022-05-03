// MaxSumSubarray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, -1};
	int n = sizeof(a) / sizeof(int);
	int ans = INT_MIN;
	int si, sj;

	int csum[1000];

	csum[0] = 0;
	int x = 0;
	for (int i = 0; i < n; ++i)
	{
		x += a[i];
		csum[i + 1] = x;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = csum[j + 1] - csum[i];
			// cout << ", Sum: " << sum <<  endl;
			if (sum > ans) {
				ans = sum;
				si = i;
				sj = j;
			}
		}
	}
	cout << "Maximum Sum: " << ans << endl;
	for (int k = si; k <= sj; ++k)
	{
		cout << a[k] << " ";
	} cout << '\n';


	return 0;
}
















