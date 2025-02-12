class Solution {
public:
    bool isPowerOfTwo(int n) {
       if (n == 0) return false;
      
        long long num = n;
        num = abs(num);

        bool isPowerTwo = (num & (num - 1)) == 0;
       
        return isPowerTwo && !(n < 0);
        
    }
};