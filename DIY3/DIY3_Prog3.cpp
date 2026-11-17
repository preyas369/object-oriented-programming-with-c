#include <iostream>
using namespace std;

class Complex
{
    private:
    double real, imag;

    public:
    void setData(double r, double i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real;
        if(imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c[4];
    c[0].setData(1, 4);
    c[1].setData(2, -9);
    c[2].setData(8, 3);
    c[3].setData(6, -2);

    for(int i = 0; i < 4; i++)
    {
        c[i].display();
    }

    return 0;
}