#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int vowels = 0, consonants = 0;

    cout << "Enter a sentence: ";
    getline (cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels : " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}