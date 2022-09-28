// FirstMissingNumber.cpp
class Solution {
public:
	int firstMissingPositive(vector<int>& a) {
		int n = a.size();

		for (int i = 0; i < n; ++i)
		{
			ni = a[i] - 1;
			while (a[i] > 0 and a[i] <= n and a[i] != a[ni]) {
				swap(a[i], a[ni]);
				ni = a[i] - 1;
			}
		}

		for (int i = 0; i < n; ++i)
		{
			if (a[i] != i + 1) return i + 1;
		}
		return n + 1;
	}
};