
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possibleday(vector<int>& bloomDay, int day, int m, int k) {
    int cnt = 0;
    int bouquet = 0;

    for (int x : bloomDay) {
        if (x <= day) {
            cnt++;
        } else {
            bouquet += cnt / k;
            cnt = 0;
        }
    }

    bouquet += cnt / k;

    return bouquet >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();

    if ((long long)m * k > n) {
        return -1;
    }

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (possibleday(bloomDay, mid, m, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of flowers: ";
    cin >> n;

    vector<int> bloomDay(n);

    cout << "Enter blooming days: ";
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    int m, k;
    cout << "Enter number of bouquets (m): ";
    cin >> m;

    cout << "Enter flowers per bouquet (k): ";
    cin >> k;

    cout << "Minimum days required: "
         << minDays(bloomDay, m, k) << endl;

    return 0;
}
