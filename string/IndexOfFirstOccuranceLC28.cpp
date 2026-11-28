#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
    for (int i = 0; i <= haystack.length(); i++)
    {
        int j = 0;

        while (j < needle.length() && haystack[i + j] == needle[j])
        {
            j++;
        }
        if (j == needle.length())
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string haystack = "helloworld";
    string needle = "world";

    cout << strStr(haystack, needle);

    return 0;
}