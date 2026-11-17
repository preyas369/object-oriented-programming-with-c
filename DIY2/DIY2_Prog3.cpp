#include <iostream>
using namespace std;

inline int minVal(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

inline int minVal(int a, int b, int c)
{
    if(a < b)
    {
        if(a < c)
            return a;
        else
            return c;
    }
    else
    {
        if(b < c)
            return b;
        else
            return c;
    }
}

int main()
{
    cout << "Minimum of two numbers: " << minVal(5, 10) << endl;
    cout << "Minimun of three numbers: " << minVal(10, 20, 30) << endl;
    return 0;
}