#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, -2, 4, -16, 20};
	int n = sizeof(a) / sizeof(int);

	int ans = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		ans = max(ans, sum);
		if (sum < 0 ) {
			sum = 0;
		}
	}

	cout << "Maximum Sum: " << ans << endl;

	return 0;
}
















