// Write a program to take phone details as input and store them in object & use constructors

#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

class Phone {
private:
	string name;
	int ram;
	string processor;
	string battery;
public:
	Phone (string n = "", int r = 0, string p = "", string b = "") {
		name = n;
		ram = r;
		processor = p;
		battery = b;
	}

	void getData() {
		cout << "Name: " << name << endl;
		cout << "Ram: " << ram << endl;
		cout << "Processor: " << processor << endl;
		cout << "Battery: " << battery << endl;
	}
};


int main(void) {

	char prompt = 0;
	vector<Phone> PhoneVec;
	while(prompt != 'x') {
		cout << "Phone Details" << endl;
		cout << "(x) exit\t(a) Add\t(p) Print" << endl;
		cin >> prompt;
		if (prompt == 'a') {
			string n="", p="", b="";
			int r=0;
			cout << "Enter Name, ram, processor and battery: " << endl;
			cin >> n >> r >> p >> b;
			Phone temp(n,r,p,b);
			PhoneVec.push_back(temp);
		} else if (prompt = 'p') {
			for (int i = 0; i < PhoneVec.size(); i++) {
				PhoneVec[i].getData();
			}
		}
	}
	
	return 0;
}