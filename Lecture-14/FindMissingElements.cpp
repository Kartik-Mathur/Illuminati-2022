// FindMissingElements.cpp: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<bool> v(nums.size() + 1);
		int n = nums.size();
		// Pehle 1 se lekar n tak assume karlo koi number nahi hai,
		// by marking indexes as false
		for (int i = 1 ; i <= n ; i++) {
			v[i] = false;
		}
		// 2. Start marking the indexes as true
		// jo jo nums array ke andar present hai
		for (int i = 0 ; i < n ; i++) {
			int val = nums[i];
			v[val] = true;
		}
		// 3. Jo jo indexes par negative value hai vo saare numbers
		// missing hai, add them inside a vector
		vector<int> ans;
		for (int i = 1 ; i <= n ; i++) {
			if (v[i] == false) {
				ans.push_back(i);
			}
		}
		return ans;

	}
};
