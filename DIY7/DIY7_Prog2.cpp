#include <iostream>
#include <string>
using namespace std;

class Shape
{
    protected:
    string color;

    public:
    Shape(string c)
    {
        color = c;
        cout << "Shape ctor\n";
    }
};

class Polygon : public Shape
{
    protected:
    int sides;

    public:
    Polygon(string c, int s) : Shape(c)
    {
        sides = s;
        cout << "Polygon ctor" << endl;;
    }
};

class Rectangle : public Polygon
{
    int length, breadth;

    public:
    Rectangle(string c, int s, int l, int b) : Polygon(c, s)
    {
        length = l;
        breadth = b;
        cout << "Rectangle ctor" << endl;
    }

    void show()
    {
        cout << "Color: " << color << endl;
        cout << "Sides: " << sides << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

int main()
{
    Rectangle r("Blue", 4, 10, 5);
    r.show();

    return 0;
}