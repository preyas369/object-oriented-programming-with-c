#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, word, words[100];
    int n = 0;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (int i = 0; i <= s.length(); i++)
    {
        if(s[i] == ' ' || i == s.length())
        {
            words[n] = word;
            n++;
            word = "";
        }
        else
        {
            word += s[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }

    return 0;
}