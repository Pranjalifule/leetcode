// Given an integer array nums, rotate the array to the right by k steps,
//  where k is non-negative.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();

        k = k % n;                           //avoids unnecessay rotations
        
        for (int j = 0; j < k; j++)
        {
            int temp = nums[n - 1];              

            for (int i = n - 1; i > 0; i--)
            {
                nums[i] = nums[i - 1];
            }

            nums[0] = temp;
        }
    }
};

int main()
{
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter k: ";
    cin >> k;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution s;
    s.rotate(nums, k);

    cout << "Rotated array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

//Time complexity = O(n * k)
//space complexity = o(1)
