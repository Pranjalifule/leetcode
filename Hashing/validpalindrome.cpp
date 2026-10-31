#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        if (!isalnum(s[left])) {
            left++;
        }
        else if (!isalnum(s[right])) {
            right--;
        }
        else {
            if (tolower(s[left]) != tolower(s[right])) {
                cout << false;
                return 0;
            }

            left++;
            right--;
        }
    }

    cout << true;

    return 0;
}