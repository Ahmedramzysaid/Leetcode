class Solution {
public:
int  gcd(int a  , int b) 
 {
    if (a == 0) return b ;
    if (a < b) swap(a,b) ;
    return gcd(a%b , b) ;
 }
    int findGCD(vector<int>& nums) {
       int mi  = nums[0] ;
       for (int i = 1 ; i  < nums.size() ;i++) mi =min(mi, nums[i]) ;
        int mx  = nums[0] ;
       for (int i = 1 ; i  < nums.size() ;i++) mx =max(mx, nums[i]) ;
       return gcd(mi,mx) ;
    }
};