#include <iostream>
#include <exception>
using namespace std;

class MathError : public exception
{
    public:
    const char* what() const noexcept override
    {
        return "Mathematical Error!";
    }
};

class DivideByZero : public MathError
{
    public:
    const char* what() const noexcept override
    {
        return "Division by Zero Error!";
    }
};

int main()
{
    cout << "Incorrect Catching Order:" << endl;

    try
    {
        throw DivideByZero();
    }
    catch (MathError &e)
    {
        cout << "Caught MathError: " << e.what() << endl;
    }
    catch (DivideByZero &e)
    {
        cout << "Caught DivideByZero: " << e.what() << endl;
    }

    cout << "\nCorrect Catching Order:" << endl;

    try
    {
        throw DivideByZero();
    }
    catch (DivideByZero &e)
    {
        cout << "Caught DivideByZero: " << e.what() << endl;
    }
    catch (MathError &e)
    {
        cout << "Caught MathError: " << e.what() << endl;
    }

    return 0;
}