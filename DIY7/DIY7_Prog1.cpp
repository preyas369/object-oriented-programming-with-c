
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected:
    string name;
    int id;

    public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }
};

class Manager : public Employee
{
    int teamsize;

    public:
    Manager(string n, int i, int t) : Employee(n, i)
    {
        teamsize = t;
    }

    void show() {
        cout << "Manager: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Team Size: " << teamsize << endl;
    }
};

class Engineer : public Employee
{
    string skill;

    public:
    Engineer(string n, int i, string s) : Employee(n, i)
    {
        skill = s;
    }

    void show()
    {
        cout << "Engineer: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Skill: " << skill << endl;
    }
};

int main()
{
    Manager m("Ravi", 105, 5);
    Engineer e("Rahul", 110, "Coding");

    m.show();
    e.show();

    return 0;
}