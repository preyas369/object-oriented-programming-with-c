#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    int freq[26] = {0};

    cout << "Enter first word: ";
    cin >> s1;
    cout << "Enter second word: ";
    cin >> s2;

    if(s1.length() != s2.length())
    {
        cout << "The words are not anagram" << endl;
        return 0;
    }
    else
    {
        for(int i = 0; i < s1.length(); i++)
        {
            freq[tolower(s1[i]) - 'a']++;
            freq[tolower(s2[i]) - 'a']--;
        };

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                cout << "The words are not anagram" << endl;
                return 0;
            }
        };
    }
    cout << "The words are anagram" << endl;
    return 0;
}