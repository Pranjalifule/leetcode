// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 
// 12 is written as XII, which is simply X + II. The number 27 is 
// written as XXVII, which is XX + V + II.
// Roman numerals are usually written largest to smallest from left to right. 
// However, the numeral for four is not IIII. Instead, the number four is written as IV.
//  Because the one is before the five we subtract it making four. The same principle applies to the number nine, 
//  which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int curr = 0, next = 0;

            switch (s[i]) {
                case 'I': curr = 1; break;
                case 'V': curr = 5; break;
                case 'X': curr = 10; break;
                case 'L': curr = 50; break;
                case 'C': curr = 100; break;
                case 'D': curr = 500; break;
                case 'M': curr = 1000; break;
            }

            if (i + 1 < s.length()) {
                switch (s[i + 1]) {
                    case 'I': next = 1; break;
                    case 'V': next = 5; break;
                    case 'X': next = 10; break;
                    case 'L': next = 50; break;
                    case 'C': next = 100; break;
                    case 'D': next = 500; break;
                    case 'M': next = 1000; break;
                }
            }

            if (curr < next) {
                ans -= curr;
            } else {
                ans += curr;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    string s = "MCMXCIV";

    cout << obj.romanToInt(s);

    return 0;
}
//Time complexity: o(n) - traverse the string once.
//Space complexity: O(1) - only a fixed number of variables.