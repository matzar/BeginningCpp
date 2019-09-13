#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	//int prisoners = 1, sweets = 1, currentPrisoner = 0, startingPoint = 0;;
	//cin >> prisoners >> sweets >> startingPoint;
	//vector<long long int> _prisoners(prisoners);

	//if (sweets == 0 || prisoners == 0) {
	//	cout << "You mean bastard!";
	//	return 0;
	//}
	//if (sweets <= 0 || prisoners <= 0 || startingPoint <= 0) {
	//	sweets = 1; prisoners = 1; startingPoint = 1;
	//}

	//vector<long long int>::iterator iter = ( _prisoners.begin() + startingPoint );

	//for (int i = 0, id = 1; i < sweets; ++i, ++id, ++currentPrisoner, ++iter) {
	//	if (currentPrisoner >= _prisoners.size()) { 
	//		currentPrisoner = 0; 
	//	}
	//	if (id > prisoners) {
	//		id = 1;
	//	} 
	//	if (iter == _prisoners.end()) {
	//		iter = _prisoners.begin();
	//	}
	//	*iter = id;
	//}
	//if (_prisoners.size() == 1) {
	//	cout << _prisoners.at(0);
	//} else if (currentPrisoner >= _prisoners.size() ) {
	//	cout << _prisoners.at(currentPrisoner - 1);
	//} else {
	//	cout << _prisoners.at(currentPrisoner);
	//}
	//return 0;

	//int test;
	//cin >> test; //prisoners = 5, sweets = 7, startingPoint = 1
	//for (int x = 0; x < test; x++) {
		//long prisoners, sweets, startingPoint, id;
		//cin >> prisoners >> sweets >> startingPoint;

		//long H = sweets % prisoners; //H = 2
		//if (H == 0) { 
		//	H = prisoners; 
		//}
		//if ( (startingPoint + (H - 1)) > prisoners ) {
		//	id = startingPoint - (prisoners - (H - 1));
		//} else { 
		//	id = startingPoint + (H - 1);
		//}

		//printf("%ld\n", id);
		//
	//}

	int n, m, s;
	cin >> n >> m >> s;
	cout << (m - 1 + s - 1) % n + 1 << "\n";

	return 0;
}