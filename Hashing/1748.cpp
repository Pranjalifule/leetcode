
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sumOfUnique(vector<int>& nums) {

    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    int sum = 0;

    for (auto it : freq) {
        if (it.second == 1) {
            sum += it.first;
        }
    }

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4};

    cout << sumOfUnique(nums);

    return 0;
}
