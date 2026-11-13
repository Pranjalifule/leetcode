#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "leetcode";
    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        // count the frequencies

        freq[s[i] - 'a']++;
    }
    //finding the first unique character
    for (int i = 0; i < s.size(); i++)
    {
            cout<< i;
            return 0;
    }
    cout<<-1;

    return 0;
}