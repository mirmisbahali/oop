#include <iostream>

class Student {
public:
    std::string name;
    int roll_no;
public:
    Student(std::string n="", int num=0) {
        name = n;
        roll_no = num;

    }
    void setName(std::string n) {
        name = n;
    }
    void setRollNo(int num) {
        roll_no = num;
    }
    void details() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll.No.: " << roll_no << std::endl;
    }
};

int main(void) {
    Student s1("John", 20);
    Student s2;
    Student s3;


    s2.setName("Mark");
    s2.setRollNo(40);
    
    s3.setName("Tom");
    s3.setRollNo(44);
    
    s1.details();
    s2.details();
    s3.details();

    return 0;
}