#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

class Person {
public:
	Person() {}
	virtual ~Person() {}
	virtual void getdata() = 0;
	virtual void putdata() = 0;
};

class Professor : public Person {
public:
	Professor(string publications = "", string name = "", int age = 0, int id = 0) {}
	string name;
	int age;
	string publications;
	int id;
	virtual void getdata() {
		cin >> name >> publications >> age >> id;
	}
	virtual void putdata() {
		cout << name << " " << age;
		cout << publications << " " << id;
	}
};

class Student : public Person {
public:
	Student(string name = "", int age = 0, int id = 0, int sum = 0) { }
	string name;
	int age;
	int sum = 0;
	int marks[6];
	int id;

	virtual void getdata() {
		cin >> name >> age >> id;
		for (int i = 0; i < sizeof(marks) / sizeof(int); ++i) {
			cin >> marks[i];
		}
	}

	virtual void putdata() {
		cout << name << " " << age << " ";
		for (int i : marks)
			sum += i;

		cout << sum << " " << id;
	}
};

int main() {


	//cin >> n; //The number of objects that is going to be created.


	
			// If val is 1 current object is of type Professor
		Person* p = new Student;

		

		p->getdata(); // Get the data from the user.

	

		p->putdata(); // Print the required output for each object.

	return 0;

}
