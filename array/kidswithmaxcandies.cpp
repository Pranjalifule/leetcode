#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = candies[0];

        for (int i = 1; i < candies.size(); i++) {
            if (candies[i] > maximum) {
                maximum = candies[i];
            }
        }
        vector<bool> answer;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maximum) {
                answer.push_back(true);
            } else {
                answer.push_back(false);
            }
        }

        return answer;
    }
};


int main() {
    int n, extraCandies;
    cout<<"Enter the number: ";
    cin >> n;

    vector<int> candies(n);
    for(int &x : candies)
        cin >> x;

    cin >> extraCandies;

    Solution obj;
    vector<bool> result = obj.kidsWithCandies(candies, extraCandies);

    for(bool x : result)
        cout << boolalpha << x << " ";

    return 0;
}
