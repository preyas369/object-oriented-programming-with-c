#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6};

    int product = accumulate(v.begin(), v.end(), 1, [](int result, int x)
        {
            return result * x;
        });

    int evenSum = accumulate(v.begin(), v.end(), 0, [](int sum, int x)
        {
            if (x % 2 == 0)
                return sum + x;

            return sum;
        });

    cout << "Elements: ";

    for (int x : v)
        cout << x << " ";

    cout << "\nProduct of all elements: " << product << endl;
    cout << "Sum of even elements: " << evenSum << endl;

    return 0;
}