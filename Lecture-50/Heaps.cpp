#include <iostream>
#include <vector>
using namespace std;

class Minheap {
public:
	vector<int> v;
	Minheap() {
		v.push_back(-1); // This is done to block the zeroth index
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

	}

}

int main() {


	return 0;
}
















