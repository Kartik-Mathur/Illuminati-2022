#include <iostream>
using namespace std;

class segmentTrees {
public:
	int* tree;
	int N;

	segmentTrees(int n) {
		tree = new int[n * 4];
		N = 4 * n;
	}

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

		tree[index] = min(tree[2 * index], tree[2 * index + 1]);
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
};



int main() {


	int a[] = { -12, 2, -5, -16, 3, 4};
	int n = sizeof(a) / sizeof(int);

	segmentTrees t(n);

	t.createTree(a, 0, n - 1);

	cout << t.minQuery(a, 0, n - 1, 0, 4) << endl;


	return 0;
}





