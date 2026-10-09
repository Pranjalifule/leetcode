//Given an array nums of integers, return how many of them contain an even number of digits.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digit = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            int num = nums[i];
            int count = 0;

            while(num>0){
                num = num/10;
              count++;
            }
            if(count%2 == 0){
                digit++;
            }
        }
        return digit;
    }
};

int main() {

      Solution s;

    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << s.findNumbers(nums);    
    return 0;
}
//Time complexity = O(n * d) where d is the count of digit
//space complexity = O(1)
