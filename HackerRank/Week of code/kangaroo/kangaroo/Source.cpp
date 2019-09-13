#include <iostream>

using namespace std;

int main() {
	int x1, v1, x2, v2;

	cin >> x1 >> v1 >> x2 >> v2;

	while (true) {
		x1 += v1;
		x2 += v2;

		if (x1 == x2) {
			cout << "YES";
			break;
		}
		else if (x1 > 1000) {
			cout << "NO";
			break;
		}
	}

	return 0;
}