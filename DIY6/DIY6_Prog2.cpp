#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }

    return a;
}

class Fraction
{
    private:
    int num, den;

    public:
    Fraction(int n = 0, int d = 1)
    {
        int g = gcd(n, d);
        num = n / g;
        den = d / g;
    }

    friend istream& operator>>(istream& in, Fraction& f);
    friend ostream& operator<<(ostream& out, Fraction f);
};

istream& operator>>(istream& in, Fraction& f)
{
    in >> f.num >> f.den;

    int g = gcd(f.num, f.den);
    f.num /= g;
    f.den /= g;

    return in;
}

ostream& operator<<(ostream& out, Fraction f)
{
    out << f.num << "/" << f.den;
    return out;
}

int main()
{
    Fraction f;

    cout << "Enter numerator and denominator: ";
    cin >> f;

    cout << "Simplified fraction: " << f << endl;

    return 0;
}