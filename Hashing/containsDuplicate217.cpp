// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.
#include <iostream>
#include <vector>
// #include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{

public:
    bool containsDuplicate(vector<int> &nums)
    {

        //----this is better approach---->
        // unordered_map<int, int> freq;

        // for (int i = 0; i < nums.size(); i++) {

        //     freq[nums[i]]++;

        //     if (freq[nums[i]] >= 2) {
        //         return true;
        //     }
        // }
        //         return false;

        //----------This is optimal ------>

        unordered_set<int> s;

        for (int num : nums)
        {
            if (s.find(num) != s.end())
            {
                return true;
            }
            s.insert(num);
        }
        return false;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1, 2, 3, 1};

    cout << s.containsDuplicate(nums);

    return 0;
}

// time complexity = O(n)
//space complexity = O(n)