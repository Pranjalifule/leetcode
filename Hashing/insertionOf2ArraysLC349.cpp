#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    vector<int> insertion(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_set<int> s;
        unordered_set<int> result;

        for (int i = 0; i < nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {

            if (s.count(nums2[i]))
            {
                result.insert(nums2[i]);
            }
        }

        vector<int> answer(result.begin(), result.end());
        return answer;
    }
};
int main()
{

    vector<int> nums1 = {1, 2, 2, 1, 4, 5, 6};
    vector<int> nums2 = {2, 2, 5, 6};

    Solution ans;
    vector<int> result = ans.insertion(nums1, nums2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}