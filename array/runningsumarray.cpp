// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};

int main() {
    int n;
    cout<<"enter size : ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> answer = obj.runningSum(nums);

    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}