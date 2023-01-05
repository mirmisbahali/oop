// Non Parameterized constructor example
#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
	int age;
	float height;
public:
	Person() { // Non Parameterized constructor
		name = "";
		age = 0;
		height = 0.0f;
	}
	void getData() {
		cout << endl << "Name: " << name;
		cout << endl << "Age: " << age;
		cout << endl << "Height: " << height;
	}
};

int main(void) {

	Person obj;
	obj.getData();

	
	return 0;
}