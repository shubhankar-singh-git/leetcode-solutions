// Problem: 476 - Number Complement
// Leetcode: https://leetcode.com/problems/number-complement/

// Solution Type: Bit Manipulation
// Approach:
//   - We create a mask consisting of all 1s having the same bit-length as the given number.
//   - The mask is constructed by finding the highest power of 2 that is just greater than `num`,
//     and then subtracting 1 from it.
//   - We are masking the given number because of the property that for every binary number,
//     if we perform an XOR operation with ((highest power of 2 which is just greater than num) - 1),
//     the result is the complement of that binary number.
//   - Unsigned integer is used to avoid overflow during left shift operations.

// Time Complexity: O(log₂ n)
// Space Complexity: O(1)

class Solution {
public:
    int findComplement(int num) {
        
        unsigned int mask = 1;   // Prevents from overflow and becomes negative value of mask while performing left shift operation 
        
        while (mask <= (unsigned int)num)
            mask <<= 1;
        
        mask -= 1;               // Creates a mask with all bits set to 1
        return mask ^ num;       // XOR with mask gives the complement
    }
};
