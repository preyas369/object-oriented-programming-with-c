#include <iostream>
using namespace std;

template <typename T>
void swapVals(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T findMax(T arr[], int n)
{
    T maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    return maxVal;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before swapping integers: " << a << " " << b << endl;

    swapVals(a, b);

    cout << "After swapping integers: " << a << " " << b << endl;

    int arr1[] = {10, 25, 5, 40, 15};

    cout << "Maximum integer: " << findMax(arr1, 5) << endl;

    double x = 5.5, y = 2.5;

    cout << "\nBefore swapping doubles: " << x << " " << y << endl;

    swapVals(x, y);

    cout << "After swapping doubles: " << x << " " << y << endl;

    double arr2[] = {2.5, 8.7, 4.2, 9.6, 3.1};

    cout << "Maximum double: " << findMax(arr2, 5) << endl;

    return 0;
}