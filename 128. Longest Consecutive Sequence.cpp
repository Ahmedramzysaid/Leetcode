class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0 ;
       set<int>s(nums.begin() ,  nums.end()) ;
       int i = 0 ,  prev = -1  , cnt =1  , ans  =1 ;
       for(auto it : s)
       { 
        i++;
         if(i==1) 
         {
            prev =  it  ;
         }  
         else {
             if(it- prev == 1) {
                cnt++;  
             }
             else {
                ans = max(ans  , cnt) ;
                cnt =1  ;
             }
         }
         prev = it  ;
       }
       return   max(ans,cnt)  ;
    }
};
