#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;  // cube of each digit
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << (isArmstrong(n) ? "Yes" : "No") << endl;
    }

    return 0;
}

