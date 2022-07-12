class Solution {
public:
	void solve(vector<int>& candidates, vector<vector<int>> &ans, vector<int> &out,
	           int target, int i) {
		// base case
		if (target == 0) {
			ans.push_back(out);
			return;
		}
		if (target < 0) {
			return;
		}
		// recursive case
		for (int j = i; j < candidates.size(); ++j)
		{
			if (i == j || candidates[j] != candidates[j - 1]) {
				out.push_back(candidates[j]);
				solve(candidates, ans, out, target - candidates[j], j + 1);
				out.pop_back();
			}
		}

	}

	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> ans;
		vector<int> out;
		sort(candidates.begin(), candidates.end());

		solve(candidates, ans, out, target, 0);
		return ans;
	}
};