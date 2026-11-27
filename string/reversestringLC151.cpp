#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    string s = "the sky is blue";
    string word;

    vector<string> words;
    stringstream ss(s);
    while (ss >> word)
    {
        words.push_back(word);
    }

    string ans = "";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        ans += words[i];

        if (i != 0)
        {
            ans += " ";
        }
    }
    cout << ans;

    return 0;
}