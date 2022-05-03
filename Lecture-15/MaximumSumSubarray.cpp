// MaximumSumSubarray.cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, 2, 3, -1};
	int n = sizeof(a) / sizeof(int);
	int ans = INT_MIN;
	int si, sj;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			for (int k = i; k <= j; ++k)
			{
				cout << a[k] << " ";
				sum += a[k];
			}
			cout << ", Sum: " << sum <<  endl;
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
















