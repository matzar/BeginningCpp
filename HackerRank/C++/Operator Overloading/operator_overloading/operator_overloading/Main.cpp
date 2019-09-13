#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

using namespace std;

typedef vector<int> row;
typedef vector< row > _matrix;
//vector< vector<int> > my_matrix(3,vector<int>(4));

class Matrix {
public:

	/*Matrix & Matrix::operator+=(const Matrix &rhs) {
		for (int i = 0; i < this->a.size(); i++) {
			for (int j = 0; j < this->a[i].size(); j++) {
				this->a[i][j] += rhs.a[i][j];
			}
		}
		return *this;
	}*/

	const Matrix Matrix::operator+(const Matrix &other) const {
		Matrix result = *this;
		for (int i = 0; i < result.a.size(); i++) {
			for (int j = 0; j < result.a[i].size(); j++) {
				result.a[i][j] += other.a[i][j];
			}
		}
		return result;
	}

	vector< vector<int> > a;
}; 

///////////////////////////////////////////////////////////
int main() {
	int cases, k;
	cin >> cases;
	for (k = 0; k<cases; k++) {
		Matrix x;
		Matrix y;
		Matrix result;
		int n, m;
		cout << "Pop the size of the Matrixs\n";
		cout << "n: ";
		cin >> n;
		cout << "\nm:";
		cin >> m;

		for (int i = 0; i<n; i++) {
			vector<int> temp;
			int num;
			for (int j = 0; j<m; j++) {
				cout << "Pop row number " << i << " of Matrix x ";
				cin >> num; //populate the matrix
				temp.push_back(num);
			}
			x.a.push_back(temp);
		}
		for (int i = 0; i<n; i++) {
			vector<int> temp;
			int num;
			for (int j = 0; j<m; j++) {
				cout << "Pop row number " << i << " of Matrix y ";
				cin >> num;
				temp.push_back(num);
			}
			y.a.push_back(temp);
		}
		result = x + y;
		
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<m; j++) {
				cout << x.a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i<n; i++) {
			for (int j = 0; j<m; j++) {
				cout << y.a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i<n; i++) {
			for (int j = 0; j<m; j++) {
				cout << result.a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

//////////////////////////////////////////////////////////////