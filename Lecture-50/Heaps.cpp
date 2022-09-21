#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	void heapify(int i) {
		int mi = i;
		int lc = 2 * i;
		int rc = lc + 1;

		if (lc<v.size() and v[mi] > v[lc]) {
			mi = lc;
		}
		if (rc < v.size() and v[mi] > v[rc]) {
			mi = rc;
		}

		if (mi != i) {
			swap(v[mi], v[i]);
			heapify(mi);
		}
	}

public:
	vector<int> v;
	Minheap() {
		v.push_back(-1);
	}

	void push(int data) {
		v.push_back(data);
		int c = v.size() - 1;
		int p = c / 2;
		while ( p > 0 and v[p] > v[c]) {
			swap(v[p], v[c]);
			c = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}

	int top() {
		return v[1];
	}
};

int main() {

	Minheap h;
	h.push(10);
	h.push(12);
	h.push(13);
	h.push(7);
	h.push(2);


	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}

	return 0;
}
















