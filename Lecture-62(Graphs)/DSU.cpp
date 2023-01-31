#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:

	vector<int> parent;
	int totalComponents;
	DSU(int n) {
		parent.resize(n);
		for (int i = 0; i < n; ++i)
		{
			make_set(i);
		}
		totalComponents = n;
	}

	void make_set(int i) {
		parent[i] = i;
	}

	void union_set(int u, int v) {
		int leader_u = get_set(u);
		int leader_v = get_set(v);

		if (leader_v != leader_u) {
			totalComponents--;
			parent[leader_u] = leader_v;
		}
	}

	int get_set(int n) {
		// base case
		if (n == parent[n]) return n;
		// recursive case
		return parent[n] = get_set(parent[n]);
	}
};

int main() {

	DSU d(6);

	d.union_set(1, 2);
	d.union_set(3, 4);
	d.union_set(3, 5);
	d.union_set(0, 2);

	cout << d.totalComponents << endl;


	return 0;
}
















