#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	//int n1 = n;
	//for (int i = 0; i < n1; ++i) {
	//	for (int j = 0; j < n - 1; j++) {
	//		cout << " ";
	//	}
	//	for (int k = n - 1; k < n1; ++k) {
	//		cout << "#";
	//	}
	//	--n;
	//	cout << endl;
	//}

	for (int i = 1; i <= n; ++i) {

		for (int j = 0; j < n - i; ++j)
			cout << " ";

		for (int j = 0; j < i; ++j)
			cout << "#";

		cout << "\n";
	}

	return 0;
}