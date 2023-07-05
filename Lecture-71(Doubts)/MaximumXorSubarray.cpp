class Solution {
public:
	vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
		int n = arr.size();
		vector<int> px(n);
		px[0] = arr[0];
		for (int i = 1; i < n; ++i)
		{
			px[i] = arr[i] ^ px[i - 1];
		}
		vector<int> ans;
		for (auto q : queries) {
			int l = q[0], r = q[1];

			int t = px[r] ^ ((l - 1) >= 0 ? px[l - 1] : 0);
			ans.push_back(t);
		}

		return ans;
	}
};