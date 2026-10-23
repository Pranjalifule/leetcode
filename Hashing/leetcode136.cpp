// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 1) {
            return nums[i];
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << singleNumber(nums);

    return 0;
}
