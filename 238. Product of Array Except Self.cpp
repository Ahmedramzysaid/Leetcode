class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt = 0 ; 
        int s  =  1 ;  
        for(auto it :  nums )
        {
            if (it != 0) s *= it  ;
            else cnt ++ ;
        }
        int i = 0;
        vector<int> ans(nums.size())  ;
        for(auto it :  nums )
        {
              if (it != 0 )
              {
                if (cnt > 0 ) ans[i] =(0) ;
                else  ans[i] =(s/it) ;
              }
              else {
                if(cnt > 1 ) ans[i] = (0) ;
                else  ans[i] =(s) ;
              }
              i++ ;
        }
              return ans  ;
    }
};
