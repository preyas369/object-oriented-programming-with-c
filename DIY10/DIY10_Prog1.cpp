#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("nums.txt");

    if (!in)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int num, count = 0, sum = 0;
    int min, max;

    while (in >> num)
    {
        if (count == 0)
        {
            min = max = num;
        }

        sum += num;
        count++;

        if (num < min)
            min = num;

        if (num > max)
            max = num;
    }

    in.close();

    if (count == 0)
    {
        cout << "No numbers found in file." << endl;
        return 0;
    }

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}