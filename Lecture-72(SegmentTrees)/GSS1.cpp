#include <iostream>
#include <climits>
using namespace std;
#define int long long

class node {
public:
	int ps, ss, ts, ms;
};

class segmentTree {
public:
	node *tree;
	int n;

	segmentTree(int N) {
		n = N;
		tree = new node[4 * n] ;
	}

	void createTree(int*a, int s, int e, int index = 1) {
		if (s == e) {
			tree[index] = {a[s], a[s], a[s], a[s]};
			return;
		}

		int mid = (s + e) / 2;
		createTree(a, s, mid, 2 * index);
		createTree(a, mid + 1, e, 2 * index + 1);

		node x;

		node left = tree[2 * index];
		node right = tree[2 * index + 1];

		x.ps = max(left.ps, left.ts + right.ps);
		x.ss = max(right.ss, right.ts + left.ss);
		x.ts = left.ts + right.ts;
		x.ms = max(left.ss + right.ps, max(left.ms, right.ms));
		tree[index] = x;
	}

	node maxSumQuery(int s, int e, int qs, int qe, int index) {
		// No overlap
		if (s > qe || e < qs) {
			return {INT_MIN, INT_MIN, INT_MIN, INT_MIN};
		}
		// Complete Overlap
		if (s >= qs and e <= qe) {
			return tree[index];
		}
		// Partial overlap
		int mid = (s + e) / 2;

		node left = maxSumQuery(s, mid, qs, qe, 2 * index);
		node right = maxSumQuery(mid + 1, e, qs, qe, 2 * index + 1);

		node x;
		x.ps = max(left.ps, left.ts + right.ps);
		x.ss = max(right.ss, right.ts + left.ss);
		x.ts = left.ts + right.ts;
		x.ms = max(left.ss + right.ps, max(left.ms, right.ms));
		return x;
	}
};


int32_t main() {


	int n;
	cin >> n;
	int a[100005];

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	segmentTree t(n);
	t.createTree(a, 0, n - 1);

	int q;
	cin >> q;
	while (q--) {
		int x, y;
		cin >> x >> y;

		node ans = t.maxSumQuery(0, n - 1, x - 1, y - 1, 1);

		cout << ans.ms << endl;
	}



	return 0;
}
















