class Solution {
public:
	void solve(vector<vector<int>> &ans, vector<int> &out,
	           int n, int k, int sum, int s) {
		// base case
		if (sum == n and k == 0) {
			ans.push_back(out);
			return;
		}
		if (sum >= n || k == 0) {
			return;
		}

		// recursive case
		for (int i = s; i <= 9; ++i)
		{
			out.push_back(i);
			solve(ans, out, n, k - 1, sum + i, i + 1);
			out.pop_back();
		}

	}

	vector<vector<int>> combinationSum3(int k, int n) {
		vector<vector<int>> ans;
		vector<int> out;

		solve(ans, out, n, k, 0, 1);
		return ans;
	}



};