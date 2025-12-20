// Problem: Armstrong Number (Multiple Test Cases)
// Platform: HackerRank

// Solution Type: Math
// Approach:
//   - Read the number of test cases T.
//   - For each test case, read integer N.
//   - Since constraints guarantee 100 <= N < 1000, N always has 3 digits.
//   - Extract each digit using modulo operation.
//   - Compute the cube of each digit and add to sum.
//   - If the sum equals the original number, print "Yes"; otherwise, print "No".

// Time Complexity: O(1) per test case
// Space Complexity: O(1)
