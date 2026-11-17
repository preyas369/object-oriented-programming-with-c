#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

class MyString
{
    unique_ptr<char[]> data;

    public:
    MyString(const char *s)
    {
        data = make_unique<char[]>(strlen(s) + 1);
        strcpy(data.get(), s);
    }

    MyString(const MyString &o)
    {
        data = make_unique<char[]>(strlen(o.data.get()) + 1);
        strcpy(data.get(), o.data.get());
    }

    void print() const
    {
        cout << data.get() << endl;
    }
};

int main()
{
    MyString a("hardware");

    MyString b = a;

    a.print();
    b.print();

    return 0;
}