#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    void reversePart(vector<int> &nums, int start, int end)
    {
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }

    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();

        k = k % n;

        reversePart(nums, 0, n - 1);

        reversePart(nums, 0, k - 1);

        reversePart(nums, k, n - 1);
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