// ReverseQueue.cpp
#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;
}

void ReverseQueue(queue<int> &q) {
	if (q.empty()) return;

	int e = q.front();
	q.pop();
	ReverseQueue(q);
	q.push(e);
}

int main() {

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	print(q);
	ReverseQueue(q);
	print(q);



	return 0;
}
















