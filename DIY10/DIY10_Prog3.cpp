#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
    public:
    string name;
    int marks;

    void display()
    {
        cout << name << " - " << marks << endl;
    }
};

int main()
{
    ifstream in("students.txt");

    if (!in)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    Student s[100];
    int n = 0;

    while (n < 100 && in >> s[n].name >> s[n].marks)
    {
        n++;
    }

    in.close();

    if (n == 0)
    {
        cout << "No student records found!" << endl;
        return 0;
    }

    int topper = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    cout << "Student Records:" << endl;

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    cout << "\nTopper:" << endl;
    s[topper].display();

    return 0;
}