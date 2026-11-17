#include <iostream>
#include <string>
#include <exception>
using namespace std;

class InsufficientFunds : public exception
{
    public:
    const char* what() const noexcept override
    {
        return "Withdraw denied (insufficient balance)";
    }
};

class BankAccount
{
    private:
    string owner;
    double balance;

    public:
    void open(const string &name, double initial)
    {
        owner = name;
        balance = (initial > 0) ? initial : 0;
    }

    void deposit(double amt)
    {
        if (amt > 0)
            balance += amt;
    }

    void withdraw(double amt)
    {
        if (amt <= 0)
            return;

        if (amt > balance)
            throw InsufficientFunds();

        balance -= amt;
    }

    double getBalance() const
    {
        return balance;
    }

    string getOwner() const
    {
        return owner;
    }
};

int main()
{
    BankAccount a;

    a.open("Asha", 1000);

    a.deposit(500);

    try
    {
        a.withdraw(2000);
        cout << "Withdrawal successful\n";
    }
    catch (const InsufficientFunds& e)
    {
        cout << e.what() << endl;
    }

    try
    {
        a.withdraw(300);
        cout << "Withdrawal successful\n";
    }
    catch (const InsufficientFunds& e)
    {
        cout << e.what() << endl;
    }

    cout << a.getOwner() << " Balance = " << a.getBalance() << endl;

    return 0;
}