#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    int maxWealth = 0;

    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;

        for (int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }

        maxWealth = max(maxWealth, sum);
    }

    cout << maxWealth;

    return 0;
}