#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main() {
    
    Solution obj;

    vector<char>s = {'h','e','l','l','o'};

    obj.reverseString(s);

    for(char ch :s){
        cout << ch;
    }

    return 0;
}