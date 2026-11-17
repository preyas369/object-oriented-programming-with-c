#include <iostream>
#include <stdexcept>
using namespace std;

class Overflow : public exception
{
    public:
    const char* what() const noexcept override
    {
        return "Stack Overflow!";
    }
};

class Underflow : public exception
{
    public:
    const char* what() const noexcept override
    {
        return "Stack Underflow!";
    }
};

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
            throw Overflow();

        a[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            throw Underflow();

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
    Stack s(3);

    try
    {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);

        cout << "Stack elements: ";
        s.display();
    }
    catch (Overflow &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    try
    {
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }
    catch (Underflow &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}