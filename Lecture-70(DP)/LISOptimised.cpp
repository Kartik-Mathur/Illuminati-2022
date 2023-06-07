class Solution {
public:

	int bs(vector<int> &a, int key) {
		int s = 0, e = a.size() - 1;
		while (s <= e) {
			int mid = (s + e) / 2;
			if (a[mid] == key) return mid;
			else if (a[mid] < key) s = mid + 1;
			else e = mid - 1;
		}
		return s;
	}

	int lengthOfLIS(vector<int>& nums) {
		int n = nums.size();
		vector<int> a;
		a.push_back(nums[0]);

		for (int i = 1; i < n; ++i)
		{
			if (a[a.size() - 1] < nums[i]) {
				a.push_back(nums[i]);
			}
			else {
				int indx = bs(a, nums[i]);
				a[indx] = nums[i];
			}
		}

		return a.size();
	}
};


//
// int lengthOfLIS(vector<int>& nums) {
// 		int n = nums.size();
// 		vector<int> a;
// 		a.push_back(nums[0]);

// 		for (int i = 1; i < n; ++i)
// 		{
// 			if (a[a.size() - 1] < nums[i]) {
// 				a.push_back(nums[i]);
// 			}
// 			else {
// 				auto indx = lower_bound(a.begin(), a.end(), nums[i]) - a.begin();
// 				if (indx < a.size()) a[indx] = nums[i];
// 			}
// 		}

// 		return a.size();
// 	}
//