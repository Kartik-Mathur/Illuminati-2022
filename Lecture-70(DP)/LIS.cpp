class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		int n = nums.size();
		vector<int> dp(nums.size(), 1);

		for (int i = 1; i < n; ++i)
			for (int j = 0; j < i; ++j)
				if (nums[i] > nums[j])
					dp[i] = max(dp[i], dp[j] + 1);

		int ans = 0;
		for (int i = 0; i < n; ++i) ans = max(dp[i], ans);
		return ans;
	}
};