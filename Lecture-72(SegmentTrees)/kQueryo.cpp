#include <bits/stdc++.h>
using namespace std;

#define pb push_back

class segmentTree {
public:
	vector<int> tree[100005];

	void createTree(int *a, int s, int e, int index) {
		if (s == e) {
			tree[index].pb(a[s]);
			return;
		}

		int mid = (s + e) / 2;
		createTree(a, s, mid, 2 * index);
		createTree(a, mid + 1, e, 2 * index + 1);

		merge(
		    tree[2 * index].begin(), tree[2 * index].end(),
		    tree[2 * index + 1].begin(), tree[2 * index + 1].end(),
		    back_inserter(tree[index])
		);
	}

	int query(int s, int e, int qs, int qe, int index, int k) {
		// No Overlap
		if (s > qe || e < qs) {
			return 0;
		}
		// Complete overlap
		if (s >= qs and e <= qe) {
			return tree[index].size() -
			       (upper_bound(tree[index].begin(), tree[index].end(), k) - tree[index].begin());
		}

		int mid = (s + e) / 2;
		int left = query(s, mid, qs, qe, 2 * index, k);
		int right = query(mid + 1, e, qs, qe, 2 * index + 1, k);
		return left + right;
	}

};

int main() {

	int n;
	cin >> n;
	int a[100004];
	for (int i = 0; i < n; ++i) cin >> a[i];

	segmentTree t;
	t.createTree(a, 0, n - 1, 1);



	int q;
	cin >> q;
	int ans = 0;
	int i, j, k;
	while (q--) {
		int a, b, c;
		cin >> a >> b >> c;

		i = a ^ ans;
		j = b ^ ans;
		k = c ^ ans;

		ans = t.query(0, n - 1, i - 1, j - 1, 1, k);
		cout << ans << endl;
	}



	return 0;
}
















