#include <iostream>
#include <fstream>
using namespace std;

class Logger
{
    public:
    virtual void write(string message) = 0;
    virtual ~Logger() {}
};

class ConsoleLogger : public Logger
{
public:
    void write(string message) override
    {
        cout << "Console Log: " << message << endl;
    }
};

class FileLogger : public Logger
{
    public:
    void write(string message) override
    {
        ofstream file("log.txt", ios::app);

        if (file.is_open())
        {
            file << message << endl;
            file.close();

            cout << "Message written to file." << endl;
        }
    }
};

int main()
{
    ConsoleLogger console;
    FileLogger file;

    Logger* logger;

    int choice;

    cout << "1. Console Logger" << endl;
    cout << "2. File Logger" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cin.ignore();

    string message;

    cout << "Enter message: ";
    getline(cin, message);

    if (choice == 1)
        logger = &console;
    else if (choice == 2)
        logger = &file;
    else
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    logger->write(message);

    return 0;
}