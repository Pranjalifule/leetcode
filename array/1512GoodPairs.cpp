#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt =0;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                 
                 if(nums[i]== nums[j] && i < j){
                    cnt++;
                 }
            }
        }
        return cnt;
    }
};
int main() {
    
    Solution obj;
    vector<int> nums = {1, 2, 3, 1, 1, 3};

    cout << obj.numIdenticalPairs(nums);


    return 0;
}