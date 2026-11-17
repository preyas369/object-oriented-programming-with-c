#include <iostream>
using namespace std;

class Tracer
{
    public:
    Tracer()
    {
        cout << "Object created" << endl;
    }

    ~Tracer()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        Tracer *t = new Tracer;
        delete t;
    }

    return 0;
}