// pair.cpp
#include <iostream>
using namespace std;

int main() {

	// pair<string, int> p({"Mango", 100});
	// pair<string, int> p = {"Mango", 100};
	// pair<string, int> p(make_pair("Mango", 100));
	pair<string, int> p = make_pair("Mango", 100);

	cout << p.first << ", " << p.second << endl;

	return 0;
}
















