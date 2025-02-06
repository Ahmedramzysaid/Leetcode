class Solution {
public:
    int reverse(int x) {
        long long  n  = 0 ;
        long long x1 =  x ;
        bool  flag  = false  ; 
        if (x1  < 0)
        {
            flag  = true  ; 
            x1*=-1  ;
        }
        while(x1)
        {
            n =  n*10 + x1%10 ;
            x1/=10 ;
        }
        if(flag) n*=-1  ;
        if (n > INT_MAX || n <INT_MIN) return 0 ;
        return  n  ;
    }
};