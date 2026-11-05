
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {

    unordered_map<int, int> freq;

    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    unordered_set<int> st;

    for(auto it : freq) {
        if(st.find(it.second) != st.end()) {
            return false;
        }

        st.insert(it.second);
    }

    return true;
}

int main() {

    vector<int> arr = {1, 2, 2, 1, 1, 3};

    cout << boolalpha << uniqueOccurrences(arr);

    return 0;
}
