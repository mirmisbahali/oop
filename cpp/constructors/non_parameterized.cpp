// Non Parameterized constructor
#include <iostream>

class A {
private:
	int age;
public:
	A() { // Non Parameterized constructor
		age = 0;
	}
	int getDate() {
		return age;
	}
};

int main(void) {
	return 0;
}