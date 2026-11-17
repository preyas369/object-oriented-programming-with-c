#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue
{
    private:
    T *arr;
    int frontIndex, rearIndex;
    int count, capacity;

    public:
    Queue(int size)
    {
        capacity = size;
        arr = new T[capacity];

        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    void enqueue(T value)
    {
        if (count == capacity)
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        count++;

        cout << "Enqueued: " << value << endl;
    }

    void dequeue()
    {
        if (count == 0)
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << "Dequeued: " << arr[frontIndex] << endl;

        frontIndex = (frontIndex + 1) % capacity;
        count--;
    }

    void front()
    {
        if (count == 0)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Front element: " << arr[frontIndex] << endl;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue<string> q(5);

    q.enqueue("Apple");
    q.enqueue("Banana");
    q.enqueue("Cherry");

    cout << endl;

    q.front();

    q.dequeue();

    q.front();

    q.enqueue("Mango");
    q.enqueue("Orange");

    return 0;
}