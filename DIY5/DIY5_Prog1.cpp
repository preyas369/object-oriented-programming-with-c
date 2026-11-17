#include <iostream>
using namespace std;

class Counter
{
    private:
    int count;
    static int total;
    static int alive;


    public:
    Counter()
    {
        count = 0;
        total++;
        alive++;
    }
    ~Counter()
    {
        alive--;
    }
    void increment()
    {
        count++;
    }
    void reset()
    {
        count = 0;
    }
    int get()
    {
        return count;
    }
    static void display()
    {
        cout << "Total: " << total << endl;
        cout << "Alive: " << alive << endl;
    }
};

int Counter::total = 0;
int Counter::alive = 0;

int main()
{
    Counter::display();

    Counter c1, c2;

    Counter::display();

    {
        Counter c3;
        Counter::display();
    }

    Counter::display();

    return 0;
}