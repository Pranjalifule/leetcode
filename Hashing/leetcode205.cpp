
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "egg";
    string t = "add";

    if (s.size() != t.size()) {
        cout << false;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {

            if (s[i] == s[j] && t[i] != t[j]) {
                cout << false;
                return 0;
            }

            if (s[i] != s[j] && t[i] == t[j]) {
                cout << false;
                return 0;
            }
        }
    }

    cout << true;
    return 0;
}
