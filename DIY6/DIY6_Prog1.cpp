#include <iostream>
using namespace std;

class Money
{
    private:
    int rupees, paise;

    public:
    Money(int r = 0, int p = 0)
    {
        rupees = r + p / 100;
        paise = p % 100;
    }

    Money operator+(Money m)
    {
        Money temp;
        temp.rupees = rupees + m.rupees;
        temp.paise = paise + m.paise;

        if(temp.paise >= 100)
        {
            temp.rupees++;
            temp.paise -= 100;
        }
        return temp;
    }

    Money operator-(Money m)
    {
        Money temp;
        temp.rupees = rupees - m.rupees;
        temp.paise = paise - m.paise;

        if(temp.paise < 0)
        {
            temp.rupees--;
            temp.paise += 100;
        }
        return temp;
    }

    void display()
    {
        cout << rupees << " rupees " << paise << " paise " << endl;
    }
};

int main()
{
    Money m1(10, 80), m2(5, 50);

    Money sum = m1 + m2;
    Money diff = m1 - m2;

    cout << "Sum : ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}