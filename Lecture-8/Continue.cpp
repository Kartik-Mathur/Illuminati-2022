#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	i = 1;
	while (i < 5) {
		if (i == 3) {
			i++;
			continue;
		}

		cout << i << " ";
		i ++;
	}

	// for (i = 0; i < 5; ++i)
	// {
	// 	cout << i << " ";
	// 	if (i == 3) {
	// 		continue;
	// 	}

	// }
	cout << endl;

	return 0;
}
















