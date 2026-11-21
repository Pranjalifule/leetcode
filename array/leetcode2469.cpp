
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    vector<double> ans = {
        celsius + 273.15,
        celsius * 1.80 + 32.00
    };

    cout << ans[0] << " " << ans[1];

    return 0;
}
