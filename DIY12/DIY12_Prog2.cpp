#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, num;

    priority_queue<int> pq;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 3)
    {
        cout << "Enter at least 3 numbers." << endl;
        return 0;
    }

    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        pq.push(num);
    }

    cout << "\nThree largest numbers:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}