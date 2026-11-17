#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> freq;

    string sentence, word;
    string mostFrequent;
    int maxCount = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word)
    {
        freq[word]++;

        if (freq[word] > maxCount)
        {
            maxCount = freq[word];
            mostFrequent = word;
        }
    }

    cout << "\nWord Frequencies:" << endl;

    for (auto &p : freq)
    {
        cout << p.first << " : " << p.second << endl;
    }

    if (maxCount > 0)
    {
        cout << "\nMost frequent word: " << mostFrequent << endl;

        cout << "Frequency: " << maxCount << endl;
    }
    else
    {
        cout << "No words entered!" << endl;
    }

    return 0;
}