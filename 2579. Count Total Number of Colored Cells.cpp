class Solution {
public:
    long long coloredCells(int n) {
        n-- ;
        return 1 + (long long)((long long)((n+1)*(long long)n)/ 2)*4  ; 
    }
};