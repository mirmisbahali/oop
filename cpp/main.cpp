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
};

int main(void)
{
    Employee employee1;
    employee1.Name = "Mark";
    employee1.Company = "boringcompany";
    employee1.Age = 30;
    employee1.IntroduceYourself();
    return 0;
}