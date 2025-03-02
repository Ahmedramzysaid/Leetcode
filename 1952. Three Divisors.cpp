class Solution {
public:
    bool isThree(int n) {
        int x  =  sqrt(n) ;
        if(x *x  !=  n  || n==1) return false  ; 
        if(x == 2 ||  x ==3) return true  ;
        for(int i =   2  ; i*i <= x ;i++ )
        {
            if (x % i == 0) return false  ;
        }
        return true  ;

    }
};