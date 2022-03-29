// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, stars;
	cin >> n;

	row = 1;
	while (row <= n) {
		// Work har row ka kya kaam hai
		stars = 1;
		while (stars <= row) {
			// stars ke loop ka jo work hai yaha likho
			cout << '*';

			stars = stars + 1;
		}


		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















