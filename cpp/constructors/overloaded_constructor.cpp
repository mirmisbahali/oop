#include<iostream>

using namespace std;

class A {
private:
	int age;
public:
	A(int x = 0) { // Parameterized Constructor
		age = x;
	}
	A(A &a_obj1) { // Copy Constructor
		age = a_obj1.age;
	}
	void getData() {
		cout << age << endl;
	}
};

int main(void) {

	A obj1;

	obj1.getData();
	
	return 0;
}