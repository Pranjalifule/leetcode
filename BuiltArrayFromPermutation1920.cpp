//Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] 
//for each 0 <= i < nums.length and return it.
//A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};

int main() {
    vector<int>nums = {1,2,3,4,2,1};

    Solution s;

    vector<int> ans = s.buildArray(nums);

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}

//time complexity 
// for the for loop O(n)
//  nums[i] = O(1)
// nums[nums[i]] = O(1)
// push_back() = O(1)
//therefore  Total Time complexity = O(n)

//Space complexity = O(n)
//because another array is created