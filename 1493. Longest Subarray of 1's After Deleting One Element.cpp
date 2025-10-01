class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int    ope  = 0 ,  res  = 0 ,  last  =0  ; 
        bool  flag =  false   ;
        for(auto it  : nums)
        {
            if (it == 0 )
            {
                if(!flag) {
                    last  = 0 ; 
                    
                    continue ; 
                    }
               
                 res  =  max(res ,  last + ope) ; 
                 last = ope  ;
                 ope  = 0 ; 
                 flag =  false ; 
            }
            else {
                flag =  true  ;
                ope++ ;
            }
        }
         res  =  max(res ,  last + ope) ; 
         if(res ==  nums.size()) return res-1 ;
        return res  ;
    }
};