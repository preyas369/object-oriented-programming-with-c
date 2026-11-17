#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double length, width;

    public:
    void setlength(double l)
    {
        length = l;
    }
    void setwidth(double w)
    {
        width = w;
    }

    double area()
    {
        return length * width;
    }

    double perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle r;

    r.setlength(5);
    r.setwidth(10);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}