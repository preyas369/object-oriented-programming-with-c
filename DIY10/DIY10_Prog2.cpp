#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");

    if (!in)
    {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    if (!out)
    {
        cout << "Error opening output file!" << endl;
        return 1;
    }

    string line;
    int lineNo = 1;

    while (getline(in, line))
    {
        out << lineNo << ". " << line << endl;
        lineNo++;
    }

    in.close();
    out.close();

    cout << "File copied successfully!" << endl;

    return 0;
}