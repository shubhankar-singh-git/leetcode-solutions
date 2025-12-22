#include<string>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int largest = -1, secondLargest = -1;

        for (char c : s) {
            if (c >= '0' && c <= '9') {
                int digit = c - '0';                                   // Convert digit character to integer

                if (largest < digit) {
                    secondLargest = largest;
                    largest = digit;
                }
                else if (digit < largest && digit > secondLargest) {    // If digit is between largest and secondLargest
                    secondLargest = digit;
                }
            }
        }
        return secondLargest;
    }
};
