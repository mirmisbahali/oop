#include<iostream>

class Student {
private:
    std::string name;
    int roll_no;
public:
    Student(std::string n="", int num=0) {
        name = n;
        roll_no = num;
    }
    void print() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "RollNo.: " << roll_no << std::endl;
    }
};

class Identity:public Student {
private:
    std::string address;
    int ph_no;
public:
    Identity(std::string name="", int roll=0, std::string ad="", int ph=0) : Student(name, roll) {
        address = ad;
        ph_no = ph;
    }
    void print() {
        Student::print();
        std::cout << "Address: " << address << std::endl;
        std::cout << "Phone:: " << ph_no << std::endl;
    }
};

int main(void) {
    Identity s1("Mark", 44, "North Pole", 888888);

    s1.print();
    return 0;
}