class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>arr ;
        for (int i = 0 ;  i  <  nums.size() ;i++)
        {
            if (nums[i] != val)
            {
                arr.push_back(nums[i]) ;
            
            }
        }
         nums.clear() ; 
         for (auto it :  arr) nums.push_back(it) ;
         return arr.size() ;

    }
};