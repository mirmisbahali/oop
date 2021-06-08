#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:

    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }

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

    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else 
            cout << Name << " sorry NO promotion for you!" << endl;
    }
};

class Developer: Employee {
public:
    string FavProgLang;

    Developer(string name, string company, int age, string FavProgLang)
        :Employee(name, company, age)
    {
        FavProgLang = FavProgLang;
    }

    void FixBug() {
        cout << getName() << " fixed bug using " << FavProgLang << endl;
    }
};

int main(void)
{
    Employee employee1 = Employee("Mark", "boringcompany", 30);
    Employee employee2 = Employee("John", "amazon", 32);
    Developer d = Developer("Steve", "youtube", 25, "C++");

    d.FixBug();

    return 0;
}