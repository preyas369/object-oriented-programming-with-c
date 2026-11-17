#include <iostream>
using namespace std;

class SafeArray
{
    private:
    int *a, size;
    int errorValue;

    public:
    SafeArray(int s)
    {
        size = s;
        a = new int[size];
        errorValue = 0;
    }

    bool valid(int index)
    {
        return index >= 0 && index < size;
    }

    int& operator[](int index)
    {
        if (!valid(index))
        {
            cout << "Error: Index out of range!" << endl;
            return errorValue;
        }

        return a[index];
    }

    ~SafeArray()
    {
        delete[] a;
    }
};

int main()
{
    SafeArray a(5);

    for (int i = 0; i < 5; i++)
    {
        a[i] = (i + 1) * 10;
    }
    int index;

    cout << "Enter index: ";
    cin >> index;

    if (a.valid(index))
        cout << "Element at index " << index << " = " << a[index] << endl;
    else
        a[index];

    return 0;
}