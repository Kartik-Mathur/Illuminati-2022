class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &out, int n, int k, int s) {
        // base case
        if (k == 0) {
            ans.push_back(out);
            return;
        }
        // recursive case
        for (int j = s; j <= n ; j++) {
            out.push_back(j);
            solve(ans, out, n, k - 1, j + 1);
            out.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> out;
        solve(ans, out, n, k, 1);

        return ans;
    }
};