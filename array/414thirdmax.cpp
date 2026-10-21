#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

        long long firstmax = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        for (int i = 0; i < n; i++) {

            if (nums[i] == firstmax || nums[i] == secondmax ||
                nums[i] == thirdmax) {
                continue;
            }

            if (nums[i] > firstmax) {
                thirdmax = secondmax;
                secondmax = firstmax;
                firstmax = nums[i];
            } else if (nums[i] > secondmax) {
                thirdmax = secondmax;
                secondmax = nums[i];
            } else if (nums[i] > thirdmax) {
                thirdmax = nums[i];
            }
        }

        if (thirdmax == LLONG_MIN) {
            return firstmax;
        }

        return thirdmax;
    }
};


int main() {
    
    vector<int> nums = {2, 2, 3, 1,3,4,6,7};

    Solution s;

    cout<<s.thirdMax(nums);

    return 0;
}
//time complexity = O(n)
//space complexity = O(1)