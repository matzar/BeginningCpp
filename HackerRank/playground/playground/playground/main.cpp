#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	for (int a_i = 0; a_i < n; a_i++){
		for (int a_j = 0; a_j < n; a_j++){
			cin >> a[a_i][a_j];
		}
	}

	int res1 = 0;
	int res2 = 0;

	for (int i = 0; i < a.size(); ++i) {
		res1 += a[i][i];
	}

	for (int i = 0; i < a.size(); ++i, --n) {
		res2 += a[i][n - 1];
	}

	if (res2 - res1 >= 0)
		cout << (res2 - res1);
	else
		cout << (res2 - res1) * (-1);

	return 0;
}
