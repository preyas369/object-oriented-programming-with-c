#include <iostream>
using namespace std;

double volume(double s)
{
    return s * s * s;
}

double volume(double l, double b, double h)
{
    return l * b * h;
}

double volume(double r, double h)
{
    return 3.14 * r * r * h;
}

int main()
{
    cout << "Volume of cube: " << volume(5.0) << endl;
    cout << "Volume of cuboid: " << volume(2.0, 3.0, 4.0) << endl;
    cout << "Volume of cylinder: " << volume(6.0, 7.0) << endl;
    return 0;
}