//Operator Overloading

#include <iostream>

using namespace std;

class Complex {
public:
	int a, b;
	void input(string s);
	const Complex operator+(const Complex& other) const {
		Complex result = *this;
		result.a += other.a;
		this.b += other.b;
		return result;
	}
	
	ostream& operator<<(ostream& o, const Complex &c) {
		o << c.a << "+ i" << c.b;
		return o;
	}
	
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
//return Complex(*this) += other;

void Complex::input(string s) {
	int v1 = 0;
	int i = 0;

	while (s[i] != '+') {
		v1 = v1 * 10 + s[i] - '0';
		i++;
	}

	while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
		i++;
	}

	int v2 = 0;
	while ( i < s.length() ) {
		v2 = v2 * 10 + s[i] - '0';
		i++;
	}

	a = v1;
	b = v2;
}

class String {
public:
	string s = " ";
	//friend istream& operator>>(istream& input, String &S);
};


//std::istream& operator>>(istream& input, String &S) {
//	int i = 0;
//	while (true) {
//		char x;
//		x = getchar();
//		if (x == 13) {
//			break;
//		}
//		S.s[i] = x;
//		input >> S.s[i];
//		++i;
//	}
//	return input;
//}


int main()
{
	Complex x, y;
	String s1, s2;
	cin >> s1;
	cin >> s2;
	x.input(s1);
	y.input(s2);
	Complex z = x + y;
	cout << z << endl;

	string s = "cococo";
	
	s[1] = 'j';
	
	for (string::iterator iter = s1.s.begin(); iter != s1.s.end(); ++iter) {
		cout << *iter;
	}
}
