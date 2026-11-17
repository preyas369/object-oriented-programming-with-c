#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;

    Person()
    {
        cout << "Person ctor" << endl;
    }
};

class Student : virtual public Person{};

class Employee : virtual public Person{};

class TA : public Student, public Employee
{
    public:
    TA(string n)
    {
        name = n;
        cout << "TA ctor" << endl;
    }

    void show()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    TA t("Rahul");
    t.show();

    return 0;
}