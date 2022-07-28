#include <iostream>
using namespace std;

template<typename T>
class Vector {
	T *a;
	int cs;
	int ms;

public:
	Vector(int s = 1) {
		a = new T[s];
		cs = 0;
		ms = s;
	}
	void push_back(T d) {
		if (cs == ms) {
			T *olda = a;
			int olds = ms;
			a = new T[2 * ms];
			ms *= 2;

			for (int i = 0; i < olds; ++i)
			{
				a[i] = olda[i];
			}
			delete []olda;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	int capacity() {
		return ms;
	}

	int size() {
		return cs;
	}

	bool empty() {
		return cs == 0;
	}

	T operator[](int indx) {
		return a[indx];
	}
};

int main() {

	Vector<int> v;
	// v[0] : We need to do operator overloading
	// v.push_back('A');
	// v.push_back('B');
	// v.push_back('C');
	// v.push_back('D');
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;




	return 0;
}
















