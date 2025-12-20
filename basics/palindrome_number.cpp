// Problem: 9 - Palindrome Number
// Leetcode: https://leetcode.com/problems/palindrome-number/

// Solution Type: Math / Two-Pointer (Half Reversal)
// Approach:
//   - Negative numbers are not palindromes.
//   - Numbers ending with 0 cannot be palindromes except 0.
//   - Reverse only the second half of the number to avoid overflow
//   - Stop when the reversed half becomes greater than or equal to the remaining half i.e. (revHalf >= x)

// Time Complexity: O(log₁₀ n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
            return false;

        int revHalf= 0;
        while(revHalf < x){
            revHalf= (revHalf*10) + (x%10);
            x/=10;
        }

        return (revHalf == x) || (revHalf/10 == x); // (revHalf/10 == x) removes middle digit for odd length number
    }
};

