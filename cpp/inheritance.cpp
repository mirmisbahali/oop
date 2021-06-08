#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
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

class Developer:public Employee {
public:
    string FavProgLang;

    Developer(string name, string company, int age, string FavProgLang)
        :Employee(name, company, age)
    {
        FavProgLang = FavProgLang;
    }

    void FixBug() {
        cout << Name << " fixed bug using " << FavProgLang << endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLsson() {
        cout << Name << " is preparing " << Subject << " lesson " << endl;
    }

    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
        {
            Subject = subject;
        }
};

int main(void)
{
    Employee employee1 = Employee("Mark", "boringcompany", 30);
    Employee employee2 = Employee("John", "amazon", 32);
    Developer d = Developer("Steve", "youtube", 25, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");

    t.PrepareLsson();
    t.AskForPromotion();

    return 0;
}