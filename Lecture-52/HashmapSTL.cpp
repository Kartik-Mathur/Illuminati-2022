// HashmapSTL.cpp
#include <iostream>
#include <map>
using namespace std;

int main() {

	map<string, int> h;
	// unordered_map<string, int> h;

	// Insertion
	// 1st way
	h.insert({"Mango", 100});
	// 2nd way
	h.insert(make_pair("Apple", 120));
	// 3rd way
	pair<string, int> p({"PineApple", 80});
	h.insert(p);
	// 4th way
	h["Kiwi"] = 50;
	h["Banana"] = 90;
	h["Papaya"] = 200;


	// Print
	// for (auto p : h) {
	for (pair<string, int> p : h) {
		cout << "(" << p.first << ", " << p.second << ")\n";
	}

	// for (int i = 0; i < h.bucket_count(); ++i)
	// {
	// 	cout << i << "--> ";
	// 	for (auto it = h.begin(i) ; it !=  h.end(i); it++) {
	// 		cout << "(" << it->first << ", " << it->second << ") ";
	// 	}
	// 	cout << endl;
	// }







	return 0;
}
















