// CombinationSum.cpp
class Solution {
public:
	void solve(vector<vector<int>> &ans, vector<int>& out, vector<int>& candidates,
	           int target, int i, int n) {
		// base case
		if (target == 0) {
			ans.push_back(out);
			return;
		}
		if (target < 0) {
			return;
		}

		// recursive case
		for (int j = i; j < n ; ++j)
		{
			out.push_back(candidates[j]);
			solve(ans, out, candidates, target - candidates[j], j, n);
			out.pop_back();
		}
	}
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> ans;
		vector<int> out;

		solve(ans, out, candidates, target, 0, candidates.size());
	}
};