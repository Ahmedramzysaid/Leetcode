class Solution {
public:
    int dp[100] ;
    int fib1(int n )
    {
        if (n == 0) return 0 ;
        if(n == 1) return 1 ;
        if (dp[n] !=-1) return dp[n] ;
        dp[n] = fib1(n-1)+fib1(n-2) ;
        return dp[n] ;
    }
    int fib(int n) {
        for(auto  &it :  dp) it =-1 ;
        return fib1(n) ;
        
    }
};