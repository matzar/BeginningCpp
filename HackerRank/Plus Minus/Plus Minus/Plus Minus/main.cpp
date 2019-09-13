#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
	float positive = 0.0;
	float negative = 0.0;
	float zero = 0.0;

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++){
		cin >> arr[arr_i];
	}
	

	for (auto i : arr) {
		if (i > 0) { positive++; }
		else if (i < 0) { negative++; }
		else { zero++; }
	}

	cout << fixed;
	cout << setprecision(6) << (positive / n) << endl;
	cout << setprecision(6) << (negative / n) << endl;
	cout << setprecision(6) << (zero / n) << endl;

	return 0;
}