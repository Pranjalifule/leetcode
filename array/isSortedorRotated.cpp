// Given an array nums, return true if the array was originally sorted in
//  non-decreasing order, then rotated some number of positions (including zero).
//  Otherwise, return false.
// There may be duplicates in the original array.
// Note: An array A rotated by x positions results in an array B of the same length
// such that B[i] == A[(i+x) % A.length] for every valid index i.

#include <iostream>
#include <vector>
using namespace std;

class solution
{

public:
    bool check(vector<int> &nums)
    {

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if (nums[i] > nums[(i + 1) % nums.size()])
            {
                count++;
            }
        }
        if (count > 1)
        {

            return false;
        }
        return true;
    }
};

    int main()
    {
        // int n;
        // cout << "Enter size of an array: ";
        // cin >> n;

        // vector<int> nums(n);
        
        // for (int i = 0; i < n; i++)
        // {
            //     cin >> nums[i];
            // }
            
            solution s;

        vector<int> a = {3, 4, 5, 1, 2}; //true
        vector<int> b = {2, 1, 3, 4};    //false
        vector<int> c = {1, 2, 3, 4, 5};  //true

        cout << s.check(a)<<endl;
        cout << s.check(b)<<endl;
        cout << s.check(c)<<endl;

        return 0;
    }


    //Time complexity = O(n). (because for loop runs n time)
    //space complexity = O(1)

