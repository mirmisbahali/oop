// Example: Parameterized constructor
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

	Person(string s, int age_a, float height_a) { // Parameterized constructor
		name = s;
		age = age_a;
		height = height_a;
	}

	Person (Person &obj2) { // Copy Constructor
		name = obj2.name;
		age = obj2.age;
		height = obj2.height;
	}

	void getData() {
		cout << endl << "Name: " << name;
		cout << endl << "Age: " << age;
		cout << endl << "Height: " << height;
	}
};

int main(void) {

	Person obj, obj2("Mark", 23, 5.10f), obj3(obj2);
	obj2.getData();
	obj3.getData();
	

	
	return 0;
}