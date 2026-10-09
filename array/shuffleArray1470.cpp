#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[n + i]);
        }
        return ans;
    }
};

int main() {
    
    vector<int> ans = {2, 5, 1, 3, 4, 7};
    int n = 3;

    Solution obj;
    vector<int> answer = obj.shuffle(ans, n);

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    return 0;
}

//time complexity = O(n)
//space complexity = O(n)