// NextGreater.cpp
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	int a[] = {7, 4, 3, 5, 9, 4, 3, 6};
	int n = sizeof(a) / sizeof(int);

	vector<int> ng(n);

	stack<int> s;

	for (int i = 0; i < n; ++i)
	{
		if (s.empty() || a[i] < a[s.top()]) {
			s.push(i);
		}
		else if (a[i] > a[s.top()]) {
			int hcb = a[i];
			while (!s.empty() and hcb > a[s.top()]) {
				ng[s.top()] = hcb;
				s.pop();
			}
			s.push(i);
		}
	}
	while (!s.empty()) {
		ng[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << ng[i] << " ";
	}
	cout << endl;

	return 0;
}
















