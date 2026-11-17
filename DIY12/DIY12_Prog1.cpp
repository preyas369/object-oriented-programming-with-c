#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<pair<string, int>> students = {{"Arya", 85}, {"Rahul", 92}, {"Arun", 76}, {"Kiran", 95}, {"Ram", 88}};

    sort(students.begin(), students.end(), [](pair<string, int> a, pair<string, int> b){return a.second < b.second;});

    cout << "Students sorted by marks (ascending):" << endl;

    for (auto p : students)
    {
        cout << p.first << " - " << p.second << endl;
    }

    return 0;
}