#include <iostream>
#include <string>
using namespace std;
 
class Student {
private:
    string name;
    int id;
    float marks;
    static int total;
 
public:
    Student(string n, int i, float m) {
        name = n;
        id = i;
        marks = m;
        total++;
    }
 
    void show() {
        cout << "Name: " << name << ", ID: " << id << ", Marks: " << marks << endl;
    }
 
    void show(string msg) {
        cout << msg << endl;
        show();
    }
 
    static int getTotal() {
        return total;
    }
 
    bool operator>(Student other) {
        return marks > other.marks;
    }
 
    friend void checkResult(Student s);
};
 
int Student::total = 0;
 
void checkResult(Student s) {
    if (s.marks >= 40)
        cout << s.name << " - Pass" << endl;
    else
        cout << s.name << " - Fail" << endl;
}
 
int main() {
    Student a("Kiran", 201, 76.5);
    Student b("Sneha", 202, 84);
 
    a.show();
    b.show("Second student:");
 
    cout << "Number of students: " << Student::getTotal() << endl;
 
    checkResult(a);
    checkResult(b);
 
    if (a > b)
        cout << "Kiran scored more than Sneha" << endl;
    else
        cout << "Sneha scored more than Kiran" << endl;
 
    return 0;
}
