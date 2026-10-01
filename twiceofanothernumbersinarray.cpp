//You are given an integer array nums where 
// the largest integer is unique.
// Determine whether the largest element in
// the array is at least twice as much as every
// other number in the array. If it is, return the index of the
// largest element, or return -1 otherwise.

#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int dominantIndex(vector<int> &nums)
    {

        int largestnum = nums[0];
        int index = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if (nums[i] > largestnum)
            {

                largestnum = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {

            if (i != index && largestnum < 2 * nums[i])
            {
                return -1;
            }
        }
        return index;
    }
};

int main()
{

    int n;
    cout << "enter length of an array:";
    cin >> n;

    vector<int> nums(n);

    cout << "enter an elements of an array: ";
    for (auto &it : nums)
    {
        cin >> it;
    }

    solution s;
    cout << "index of a largest element is: " << s.dominantIndex(nums);
    return 0;
}

// time complexity of the solution - 
//first for loop = O(n)
//second for loop = O(n)

//therefor O(n) + O(n) = 2 O(n)
//Timecomplexity = O(n).

//space complexity = O(1)  (no additional structure is created inside a function)