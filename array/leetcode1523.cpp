
#include <iostream>
using namespace std;

int main() {
    int low, high;
    cin >> low >> high;

    int ans = (high + 1) / 2 - low / 2;

    cout << ans;

    return 0;
}
