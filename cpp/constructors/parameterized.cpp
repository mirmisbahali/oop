// Parameterized constructor
#include<iostream>
using namespace std;

class A {
private:
	int age;
public:
	A (int x) { // Parameterized constructor
		age = x;
	}
	int getData() {
		return age;
	}
};

int main(void) {
	A obj(28);
	cout << obj.getData() << endl;
	return 0;
}