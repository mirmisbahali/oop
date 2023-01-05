// Copy Constructor
#include <iostream>
using namespace std;

class A {
private:
	int age;
public:
	A (int x) { // Parameterized constructor
		age = x;
	}
	A (A &a_obj1) { // Copy Constructor
		age = a_obj1.age;
	}
	int getData() {
		return age;
	}

};

int main(void) {
	A a_obj1(28); // Parameterized Constructor
	A a_obj2(a_obj1); // Copy Constructor
	cout << a_obj2.getData();
	return 0;
}