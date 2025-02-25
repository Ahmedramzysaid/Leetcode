class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int>m  ; 
        for (int i = 0 ;  i   < nums.size() ;i++)
        {
            m[nums[i]]++ ;
        }
        int ans  =0 ;
        for (int i  =1 ; i <= 2147483647 ;i++)
        {
            if (m[i] == 0)
            {
                ans =  i ; 
                break ;
            }
        }
        return ans ;
    }
};