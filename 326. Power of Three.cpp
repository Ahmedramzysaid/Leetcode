class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false  ; 
      return (1162261467 % n == 0);
    }
};
/*********************************************** */
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false  ; 
        while(n != 1)
        {
            if(n%3 != 0 && n) return false  ; 
            n/=3 ;
        }
        return true  ;
    }
};