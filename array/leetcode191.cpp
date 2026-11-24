
#include <iostream>
using namespace std;

int main() {
    unsigned int n = 11;
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }

        n = n / 2;
    }

    cout << "Number of 1 bits: " << count;

    return 0;
}
