// Histogram.cpp
class Solution {
public:
	int largestRectangleArea(vector<int>& h) {
		int n = h.size();
		vector<int> ns(n), ps(n);

		ps[0] = -1;
		stack<int> s;
		s.push(0);

		for (int i = 1; i < n ; i++) {
			while (!s.empty() and h[i] <= h[s.top()]) {
				s.pop();
			}
			if (!s.empty() and h[i] > h[s.top()]) {
				ps[i] = s.top();
			}
			else {
				ps[i] = -1;
			}
			s.push(i);
		}

		while (!s.empty()) s.pop();

		ns[n - 1] = n;
		s.push(n - 1);

		for (int i = n - 2 ; i >= 0 ; i--) {
			while (!s.empty() and h[i] <= h[s.top()]) {
				s.pop();
			}
			if (!s.empty()) {
				ns[i] = s.top();
			}
			else {
				ns[i] = n;
			}
			s.push(i);
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int current_area = (ns[i] - ps[i] - 1) * h[i];
			ans = max(ans, current_area);
		}
		return ans;
	}
};













