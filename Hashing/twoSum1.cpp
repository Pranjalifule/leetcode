// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

         unordered_map<int, int> mpp;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int more = target - num;

            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[num] = i;
        }
        return {};
    }
};


int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = s.twoSum(nums, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

// Time complexity = O(n)
// Space complexity = O(n)