// PriorityQueue.cpp
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

class comparator {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

int main() {

	// priority_queue<int> h; // Max Heap
	// priority_queue<int, vector<int>, comparator> h; // Min Heap
	priority_queue<int, vector<int>, greater<int> > h; // Min Heap
	priority_queue<int, vector<int>, less<int> > h; // Max Heap
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
















