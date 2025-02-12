class Solution {
public:
    double pow_f(double x  , long long n)
    {
        if (n == 0) return 1  ;
        if (n%2 == 0)
        {
            double sum = pow_f(x,n/2) ;
            return sum *sum  ;
        }
        else {
          double sum = pow_f(x,n/2) ;
            return sum *sum * x  ;   
        }
    }
    double myPow(double x, int n) {
      bool  flag  =  false  ;
      long long m  =  n ;
      if (n <  0) {
        flag  =true  ; 
        m *= -1; 
      }
      double ans = pow_f(x, m) ;
      if (flag) return 1/ans  ;
      else return ans ;
      
    }
};