#include<iostream>
#include<vector>
#include<string>
using namespace std;
long long n , h , l , r;
vector<long long> nums;
vector<vector<long long>> dp;
long long solve(long long sleeps, long long jaagneKaTime) {

	if (sleeps >= nums.size()) {
		return  dp[i][value] = 0;
	}
	if (dp[i][value] != -1) return dp[i][value];
	long long val_1 = (jaagneKaTime + nums[sleeps]) % h;
	long long val_2 = (value + nums[i] - 1) % h;

	long long ans_1 = solve(nums , i + 1 , val_1 , dp)  + (val_1 >= l and val_1 <= r);
	long long ans_2 = solve(nums , i + 1 , val_2 , dp)  + (val_2 >= l and val_2 <= r);


	return dp[i][value] = max(ans_1 , ans_2);
}
int main() {
	cin >> n >> h >> l >> r;
	vector<long long> nums(n);
	for (long long i = 0 ; i < n ; i++) {
		cin >> nums[i];
	}
	vector<vector<long long>> dp(2005 , vector<long long> (2005, -1));
	cout << solve(nums , 0 , 0 , dp) << endl;
	return 0;
}
