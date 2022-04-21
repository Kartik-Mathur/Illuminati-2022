#include <iostream>
using namespace std;

void factorial(int n) {
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i;
	}

	cout << "Ans: " << ans << '\n';
}

int fact(int n) {
	int ans = 1;

	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i;
	}

	return ans;
}


int main() {

	int N;
	cin >> N;
	factorial(N);
	int ans = fact(N);
	cout << "Updated Value: " << ans + 10 << endl;
	cout << "Updated Value: " << ans + 20 << endl;

	return 0;
}
















