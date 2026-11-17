#include <iostream>
using namespace std;

class Time
{
    private:
    int hh, mm;

    public:
    Time(int h, int m)
    {
        hh = h;
        mm = m;
    }

    friend Time laterOf(Time t1, Time t2);

    void display()
    {
        cout << hh << ":";
        if(mm < 10) cout << "0";
        cout << mm << endl;
    }
};

Time laterOf(Time t1, Time t2)
{
    if(t1.hh > t2.hh)
        return t1;
    else if(t1.hh < t2.hh)
        return t2;
    else if(t1.mm > t2.mm)
        return t1;
    else
        return t2;
}

int main()
{
    Time t1(12,15);
    Time t2(17,5);

    cout << "Later time: ";
    laterOf(t1, t2).display();

    return 0;
}