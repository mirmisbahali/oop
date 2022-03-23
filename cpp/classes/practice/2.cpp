#include <iostream>

class Student {
public:
    std::string name;
    int roll_no;
    int ph_no;
    std::string address;
public:
    Student(std::string n="", int rn=0, int ph=0, std::string ad="") {
        name = n;
        roll_no = rn;
        ph_no = ph;
        address = ad;
    }

    void print() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll.No: " << roll_no << std::endl;
        std::cout << "Ph.No.: " << ph_no << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << std::endl;
        
    }
    
};

int main(void) {

    Student s1("Sam"), 
            s2("John");
    
    s1.roll_no = 11;
    s1.ph_no = 222222;
    s1.address = "Atlantic",

    s2.roll_no = 22;
    s2.ph_no = 333333;
    s2.address = "Arctic";

    s1.print();
    s2.print();
    
    

    return 0;
}