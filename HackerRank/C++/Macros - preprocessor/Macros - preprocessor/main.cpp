#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#ifndef __cplusplus
#error A C++ compiler is required
#endif

#define toStr(...) puts(#__VA_ARGS__)
#define minimum(i, j) (( i < j ) ? i : j)
#define maximum(i, j) (( i > j ) ? i : j)

#define SWAP(a, b) do {	\
				a ^= b;	\
				b ^= a; \
				a ^= b; \
} while (0)


//#ifdef minimum
//#define INF minimum
//#endif
//
//#define foreach(container, var) for(auto container = (var).begin(); container != (var).end(); ++var) 
//
////make function factory and use it
//#define FUNCTION(name, a) int fun_##name()	

/*#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif*/ 




int main() {
	/*int i = 100;
	int j = 10;
	
	cout << MIN(i, j) << endl;
	cout << MAX(i, j) << endl;*/
	//cout << toStr(a);            // expands to puts("")
	//cout << toStr(1, "x", int); // expands to puts("1, \"x\", int")

	int n = 0; cin >> n;
	vector<int> v;

	int num = 0;

	for (int i = 0; i < n; ++i) {
		cin >> num;
		v.push_back(num);
	}

	int mn = 0;
	int mx = 0;

	for (int i = 0; i < n - 1; ++i) {
		cout << v[i] << endl;
		cout << v[i + 1] << endl;
		if ((v[i] < v[i + 1]) ? mn = v[i] : mn = v[i + 1]);
		if ((v[i] > v[i + 1]) ? mx = v[i] : mx = v[i + 1]);
	}

	/*for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << endl;
		cout << *(v.begin() + 1) << endl;
		mn = minimum(*iter, *(v.begin() + 1));
		mx = maximum(*iter, *(v.begin() + 1));
	}*/

	int ans = mx - mn;
	std::cout << mx << " - " << mn << " = " << ans ;
	std::cout << toStr(Result = ) << ' ' << ans;
	int x = 10;
	int y = 20;
	SWAP(x, y);
	std::cout << x;
	return 0;
}