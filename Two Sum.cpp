class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v=  nums ; 
      sort(nums.begin() , nums.end()) ; 
      int l = 0 , r = nums.size()-1 ;
      int   pos = -1 , pos1 =-1 , val = 1e9 , val1 = 1e9 ;
      while(l <r) 
      {
               if (nums[l]+nums[r] ==  target )
               {
                val = nums[l]  ;
                val1 = nums[r] ; 
                break ; 
               }
               else if (nums[l]+nums[r] > target) r--  ;
               else l++ ;
      } 
      for (int i = 0;  i < v.size() ; i++) 
      {
        if (v[i] ==  val && pos == -1) 
        {
                  pos = i ; 
        }
        else if (v[i] ==  val1 && pos1 == -1 && i !=  pos )
        {
            pos1 = i ; 
        }
      }
      vector <int> res = {pos , pos1} ; 
      sort(res.begin() ,  res.end()) ;
      return res ; 
    }
};