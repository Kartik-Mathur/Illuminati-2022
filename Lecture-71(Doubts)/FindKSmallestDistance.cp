class Solution {
public:
	bool isPossible(vector<int>& a, int mid, int k) {
		int i = 0, j = 1;
		int pair_cnt = 0;
		int n = a.size();
		for (i = 0; i < n - 1; ++i)
		{
			while (j < n and (a[j] - a[i]) <= mid) {
				j++;
			}

			pair_cnt += (j - i - 1);
		}

		return pair_cnt >= k;
	}

	int solve(vector<int>& a, int k) {
		sort(a.begin(), a.end());
		int n = a.size();
		int s = 0;
		int e = a[n - 1] - a[0];

		while (s <= e) {
			int mid  = (s + e) / 2;
			if (isPossible(a, mid, k)) e = mid - 1;
			else s = mid + 1;
		}
		return s;
	}

	int smallestDistancePair(vector<int>& nums, int k) {
		return solve(nums, k);
	}
};