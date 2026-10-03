// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place
// such that each unique element appears only once. The relative order of the elements should be kept the same.
// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates,
//  return the number of unique elements k.
// The first k elements of nums should contain the unique numbers in sorted order.
// The remaining elements beyond index k - 1 can be ignored.

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;

        for (int j = 1; j < n; j++)
        {

            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};

int main()
{
    int n;
    cout<<"Enter a size of an array:";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution s;

    cout <<"Number of unique elements are: "<< s.removeDuplicates(nums);

    return 0;
}

//time complexity = O(n)  --- because we traverse the for loop only once using j
//space complexity = O(1)  -- no extra space were used here 