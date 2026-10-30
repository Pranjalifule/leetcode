// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
// That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
// Return the answer in an array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};

    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }

        ans.push_back(count);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

// time complexity = O(n*n).
// space complexity = O(n).