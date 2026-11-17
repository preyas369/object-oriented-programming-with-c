#include <iostream>
using namespace std;

class Stack
{
    private:
    int *a;
    int top, size;

    public:
    Stack(int s)
    {
        size = s;
        a = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
            cout << "Stack overflow" << endl;
        else
            a[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack underflow" << endl;
        else
            cout << "Popped: " << a[top--] << endl;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";

        cout << endl;
    }

    ~Stack()
    {
        delete[] a;
        cout << "Stack memory released" << endl;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;
}