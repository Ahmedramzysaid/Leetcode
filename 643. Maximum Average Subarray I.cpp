class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      vector<int>  prefix(nums.size() ,0)  ;
      prefix[0] =  nums[0] ; 
      for(int i = 1 ; i  < nums.size() ;i++  )
         prefix[i] =  prefix[i-1]+nums[i] ;
     double ans  = -1e18 ; 
     int j   = -1 ;
     for(int i = k-1 ;  i  < nums.size() ;i++ )
     {
         if(j != -1) ans =max(ans,  (prefix[i]-prefix[j])/(k*1.0)) ; 
         else ans =max(ans,  (prefix[i])/(k*1.0)) ;
         j++ ;

     }
     return ans  ;
         
    }
};