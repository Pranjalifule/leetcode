
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    unordered_map<int, int> freq;
    vector<int> result;

    for(int i = 0; i < nums1.size(); i++) {
        freq[nums1[i]]++;
    }

    for(int i = 0; i < nums2.size(); i++) {

        if(freq[nums2[i]] > 0) {
            result.push_back(nums2[i]);
            freq[nums2[i]]--;
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
