// Given an array arr, replace every element in that array with the greatest element
// among the elements to its right, and replace the last element with -1.
// After doing so, return the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    int n = arr.size();

    vector<int> ans(n);
    int greatest = arr[n - 1];
    ans[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--) {
        ans[i] = greatest;
        greatest = max(greatest, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
//time complexity = O(n)
// Space complexity = O(n)