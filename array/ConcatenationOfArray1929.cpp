// Given an integer array nums of length n, you want to create an array ans of 
// length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.
//Return the array ans.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,1};

    Solution s;

    vector<int>ans = s. getConcatenation(nums);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}

//Time complexity = O(n);
//space complexity = O(n);