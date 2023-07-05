class Solution {
public:
	vector<int> maximumSumQueries(vector<int>& a, vector<int>& b, vector<vector<int>>& queries) {
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		vector<int> ans;
		for (auto q : queries) {
			int x = q[0];
			int y = q[1];

			auto t = lower_bound(a.begin(), a.end(), x);

			if (t == a.end()) {
				ans.push_back(-1);
				continue;
			}
			int indx = (t - a.begin());


			cout << "(" << *t << ", " << *t1 << ") " << "(" << x << ", " << y << ")" << endl;
			if (*t >= x and * t1 >= y)ans.push_back(*t + *t1);
			else ans.push_back(-1);
		}

		return ans;

	}
};