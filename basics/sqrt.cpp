// Problem: 69 - Sqrt(x)
// Leetcode: https://leetcode.com/problems/sqrtx/

// Solution Type: Brute Force
// Approach: Performed a linear search from 1 to x by squaring each number.
// Time Complexity: O(x)
// Space Complexity: O(1)


#include <climits>
class Solution {
public:
    int mySqrt(int x) {
        for (int i = 1; i <= x; i++) {
            if (i > INT_MAX / i || i * i > x)    // If 'i*i' overflows and 'i' is int then it means it's square root is 'i-1'
                return i - 1;
            if (i * i == x)
                return i;
        }
        return 0; // for x == 0
    }
};
