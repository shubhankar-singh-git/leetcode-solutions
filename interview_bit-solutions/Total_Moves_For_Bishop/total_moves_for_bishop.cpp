#include<algorithm>
using namespace std;

class Solution{
public:
    int solve(int A, int B) {
    int totalMoves = 0;
    
    // Moves possible towards bottom-left diagonal
    totalMoves += min(A - 1, B - 1);
    
    // Moves possible towards top-left diagonal
    totalMoves += min(A - 1, 8 - B);
    
    // Moves possible towards bottom-right diagonal
    totalMoves += min(8 - A, B - 1);
    
    // Moves possible towards top-right diagonal
    totalMoves += min(8 - A, 8 - B);
    
    return totalMoves;
    }
};
