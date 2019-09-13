
#include<iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

/*
2 2 // number of sequences // number of queries
3 1 5 4 // size of the queries and sequence
5 1 2 8 9 3 //size of the queries and sequence
0 1 //index of the array to display
1 3 //index of the array to display
*/
	//vector< vector<int>* > pA; //vector of vector of pointers
	//pA.push_back( new vector<int> );


int main() {
//typedef vector<int> Row;
//typedef vector<Row> Matrix;
//
//	int n, q, vectorSize, num;
//	int i, j;
//	cout << "Number of vectors: ";
//	cin >> n;
//	cout << "Number of queries (not used): ";
//	cin >> q;
//	
//	Matrix _matrix;
//	vector<int> display;
//
//	for (int i = 0; i < n; ++i) {
//		vector<int> temp;
//		cout << "Size of the " << i << " vector: ";
//		cin >> vectorSize;
//		for (int j = 0; j < vectorSize; ++j) {
//			cout << j << " number: ";
//			cin >> num;
//			temp.push_back(num);
//		}
//		_matrix.push_back(temp);
//	}
//	
//	//display
//	//for (int i = 0; i < _matrix.size(); ++i) {
//	//	for (int j = 0; j < _matrix[i].size(); ++j) {
//
//	//	}
//	//}
//
//	for (int i = 0; i < n; ++i) {
//		
//		cout << "Index i: ";
//		cin >> i;
//		cout << "Index j: ";
//		cin >> j;
//		display.push_back(_matrix[i][j]);
//	}
//
//	//display
//	for (auto i : display) {
//		cout << i << " ";
//	}
//
//
//
//

		// Complete the code.
		int d; long int ld; long long int lld; char c; float f; double lf;
		scanf_s("%d %ld %lld %c %f %lf", &d, &ld, &lld, &c, &f, &lf);

		printf("%d %ld %lld %c %f %lf", d, ld, lld, c, f, lf);
		
	
	return 0;
}

