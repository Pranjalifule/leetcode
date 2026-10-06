// You are given a 1-indexed array of integers numbers that is already sorted in non-decreasing order.
// Find two numbers such that they add up to a specific target number. Let these two numbers
// be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers index1 and index2 as an integer array [index1, index2]
// of length 2.
// The tests are generated such that there is exactly one solution. 
// You may not use the same element twice.
// Your solution must use only constant extra space.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum == target) 
            {
                return {i + 1, j + 1};
            } 
            else if (sum < target) 
            {
                i++;
            } 
            else {
                j--;
            }
        }
        
        return {};
    }
};

int main() {
    
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter sorted array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution s;

    vector<int> answer = s.twoSum(numbers, target);

    if (answer.empty()) {
        cout << "No pair found";
    }
    else {
        cout << "Indices: ";

        for (int x : answer) {
            cout << x << " ";
        }
    }
    return 0;
}

//time complexity is O(n);
//space complexity is O(1);