#include <iostream>
using namespace std;

class Order
{
    private:
    int id;
    static int nextID;

    public:
    Order()
    {
        id = nextID++;
    }

    void display()
    {
        cout << "Oreder ID: " << id << endl;
    }
};

int Order::nextID = 1001;

int main()
{
    Order o[5];

    for(int i = 0; i < 5; i++)
    {
        o[i].display();
    }

    return 0;
}