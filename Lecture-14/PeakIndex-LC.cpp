// PeakIndex - LC.cpp
class Solution {
public:
	int peakIndexInMountainArray(vector<int>& arr) {

		int ans;
		int n = arr.size();
		int mx = INT_MIN;
		for (int i = 0 ; i < n ; i++) {
			if (arr[i] > mx) {
				mx = arr[i];
				ans = i;
			}
		}

		return ans;
	}
};
