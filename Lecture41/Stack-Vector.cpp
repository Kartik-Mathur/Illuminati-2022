// Stack - Vector.cpp
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
public:
	vector<T> v;

	void push(T data) {
		v.push_back(data);
	}

	void pop() {
		v.pop_back();
	}

	bool empty() {
		return v.size() == 0;
	}

	T top() {
		return v[v.size() - 1];
	}
};

int main() {

	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;



	return 0;
}
















