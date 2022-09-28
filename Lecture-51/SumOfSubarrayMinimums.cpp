class Solution {
public:
	int sumSubarrayMins(vector<int>& a) {
		vector<int> ps(a.size());
		vector<int> ns(a.size());
		int mod = 1e9 + 7;

		ps[0] = -1;
		stack<int> s;
		s.push(0);
		int n = a.size();

		for (int i = 1; i < n; ++i)
		{
			while (!s.empty() and a[s.top()] >= a[i]) {
				s.pop();
			}

			if (s.empty()) ps[i] = -1;
			else ps[i] = s.top();

			s.push(i);
		}

		while (!s.empty()) s.pop();

		ns[n - 1] = n;

		s.push(n - 1);
		for (int i = n - 2; i >= 0; --i)
		{
			while (!s.empty() and a[i] < a[s.top()]) {
				s.pop();
			}

			if (!s.empty()) ns[i] =  s.top();
			else ns[i] = n;
			s.push(i);
		}
		long ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans = (ans + (long)(i - ps[i]) * (ns[i] - i) * a[i]) % mod;
		}
		return ans;
	}
};



















