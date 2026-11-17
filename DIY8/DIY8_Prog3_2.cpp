#include <iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base
{
    private:
    int* data;

    public:
    Derived()
    {
        data = new int[100];

        cout << "Memory allocated" << endl;
    }

    ~Derived()
    {
        delete[] data;

        cout << "Derived destructor called" << endl;
    }
};

int main()
{
    Base* ptr = new Derived();

    delete ptr;

    return 0;
}