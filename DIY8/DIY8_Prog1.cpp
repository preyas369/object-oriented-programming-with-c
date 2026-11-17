#include <iostream>
using namespace std;

class Account
{
public:
    virtual double calculateInterest(double balance) = 0;
    virtual ~Account() {}
};

class Savings : public Account
{
    public:
    double calculateInterest(double balance) override
    {
        return balance * 0.06;
    }
};

class Current : public Account
{
public:
    double calculateInterest(double balance) override
    {
        return balance * 0.03;
    }
};

int main()
{
    Savings s;
    Current c;

    Account* accounts[2];

    accounts[0] = &s;
    accounts[1] = &c;

    double balance = 10000;

    for (int i = 0; i < 2; i++)
    {
        cout << "Interest: " << accounts[i]->calculateInterest(balance) << endl;
    }

    return 0;
}