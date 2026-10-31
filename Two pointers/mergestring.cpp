#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1 = "abc";
    string word2 = "pqr";

    string ans = "";
    int i = 0, j = 0;

    while (i < word1.size() || j < word2.size()) {

        if (i < word1.size()) {
            ans += word1[i];
            i++;
        }

        if (j < word2.size()) {
            ans += word2[j];
            j++;
        }
    }

    cout << ans;

    return 0;
}