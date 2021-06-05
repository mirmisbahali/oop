#include <iostream>

using namespace std;

class Employee {
public:    
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(void)
{
    Employee employee1 = Employee("Mark", "boringcompany", 30);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "amazon", 32);
    employee2.IntroduceYourself();

    return 0;
}