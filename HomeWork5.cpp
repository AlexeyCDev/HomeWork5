#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string firstString, secondString;
    getline(cin, firstString);
    getline(cin, secondString);
    vector<string> wordsInFirstString, wordsInSecondString;
    stringstream ss1(firstString), ss2(secondString);
    string word;

// we get the words from the first line
    while (ss1 >> word)
    {
        wordsInFirstString.push_back(word);
    }

// we get the words from the second line
    while (ss2 >> word)
    {
        wordsInSecondString.push_back(word);
    }

    string commonWords;
    for (string s1 : wordsInFirstString)
    {
        for (string s2 : wordsInSecondString)
        {
            if (s1 == s2)
            {
                commonWords += s1 + " ";
                break;
            }
        }
    }

    cout << commonWords << endl;

    return 0;
}
