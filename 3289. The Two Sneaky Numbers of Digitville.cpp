class Solution {
    int arr[101] ;
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0 ;  i  < nums.size() ;i++)
        {
              if(++arr[nums[i]] == 2)ans.push_back(nums[i]) ;
        }
        return ans ;
    }
};