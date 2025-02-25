class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0  ;
        for (int i  = 0 ; i< nums.size();i++)
        {
            if (nums[i]%3 != 0)
             ans+=min(abs(nums[i]-(int)(nums[i]/3)*3), abs(nums[i]-(int)((nums[i]/3)+1)*3)) ;
        }
        return ans  ;
    }
};