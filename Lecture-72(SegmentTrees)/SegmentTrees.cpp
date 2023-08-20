#include <iostream>
using namespace std;

int lazy[100000] = {0};

class segmentTrees {
public:
	int* tree;
	int N;


	segmentTrees(int n) {
		tree = new int[n * 4];
		N = 4 * n;
	}

	/*void createTree(int *a, int s, int e, int index = 1) {
		// base case
		if (s == e) {
			tree[index] = a[s];
			return;
		}
		// recursive case
		int mid = (s + e) / 2;
		createTree(a, s, mid, 2 * index);
		createTree(a, mid + 1, e, 2 * index + 1);

		tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	}*/

	void createTree(int *a, int s, int e, int index = 1) {
		// base case
		if (s == e) {
			tree[index] = a[s];
			return;
		}
		// recursive case
		int mid = (s + e) / 2;
		createTree(a, s, mid, 2 * index);
		createTree(a, mid + 1, e, 2 * index + 1);

		tree[index] = tree[2 * index] + tree[2 * index + 1];
	}

	int minQuery(int *a, int s, int e, int qs, int qe, int index = 1) {
		// No Overlap
		if (s > qe || e < qs) return INT_MAX;

		// Complete overlap
		if (qs <= s and qe >= e) return tree[index];

		// Partial Overlap
		int mid = (s + e) / 2;
		return min (minQuery(a, s, mid, qs, qe, 2 * index),
		            minQuery(a, mid + 1, e, qs, qe, 2 * index + 1));
	}

	void update(int s, int e, int qs, int qe, int index, int val) {
		// No Overlap
		if (s > qe || e < qs) return;

		if (s == e) {
			tree[index] += val;
			return;
		}

		// Overlapping hai
		int mid = (s + e) / 2;
		update(s, mid, qs, qe, 2 * index, val);
		update(mid + 1, e, qs, qe, 2 * index + 1, val);

		tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	}

	void updateLazy(int s, int e, int qs, int qe, int index, int val) {
		if (lazy[index] != 0) {
			tree[index] += lazy[index];
			if (s != e) {
				lazy[index * 2] += lazy[index];
				lazy[index * 2 + 1] +=  lazy[index];
			}

			lazy[index] = 0;
		}

		// No Overlap
		if (s > qe || e < qs) {
			return;
		}
		// Complete Overlap
		if (qs <= s and qe >= e) {
			tree[index] += (e - s + 1) * val;

			if (s != e) {
				lazy[index * 2] += val;
				lazy[index * 2 + 1] += val;
			}
			return;
		}
		// Partial Complete
		int mid = (s + e) / 2;
		updateLazy(s, mid, qs, qe, 2 * index, val);
		updateLazy(mid + 1, e, qs, qe, 2 * index + 1, val);
		tree[index] = tree[2 * index] + tree[2 * index + 1];
	}

	int queryLazy(int s, int e, int qs, int qe, int index) {
		if (lazy[index] != 0) {
			tree[index] += lazy[index];
			if (s != e) {
				lazy[index * 2] += lazy[index];
				lazy[index * 2 + 1] +=  lazy[index];
			}

			lazy[index] = 0;
		}

		// No Overlap
		if (s > qe || e < qs) {
			return 0;
		}

		// Complete Overlap
		if (qs <= s and qe >= e) {
			return tree[index];
		}

		int mid = (s + e) / 2;
		return queryLazy(s, mid, qs, qe, 2 * index) +
		       queryLazy(mid + 1, e, qs, qe, 2 * index + 1);
	}
};



int main() {


	int a[] = {1, 2, -5, 6, 3, 4};
	int n = sizeof(a) / sizeof(int);

	segmentTrees t(n);

	t.createTree(a, 0, n - 1);

	// cout << t.minQuery(a, 0, n - 1, 0, 4) << endl;

	t.updateLazy(0, n - 1, 3, 5, 1, 10);
	t.updateLazy(0, n - 1, 3, 4, 1, 20);
	cout << t.queryLazy(0, n - 1, 3, 5, 1) << endl;

	return 0;
}





