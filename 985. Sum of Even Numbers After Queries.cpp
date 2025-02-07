
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      vector<bool>v(nums.size() , false) ;
      for(int i = 0 ;  i  <  nums.size() ;i++)
        if (nums[i]%2 == 0)v[i] = true  ;
     int res= 0 ;
      for(auto it :  nums)
        if(it%2 == 0)res += it ;
      vector<int> ans ;
      for(int i=0 ; i <queries.size() ;i++ )
      {
        if (abs((nums[queries[i][1]]+ queries[i][0] ))%2 == 0)
        {
            if (v[queries[i][1]]) res += queries[i][0] ;
            else  res+= (queries[i][0]+nums[queries[i][1]]) ;
              v[queries[i][1]] =  true  ;
        }
        else {
            if (v[queries[i][1]])res -= nums[queries[i][1]] ;
              v[queries[i][1]] =  false ;  ;
        }
        nums[queries[i][1]]+=queries[i][0] ;
        ans.push_back(res) ;
      }
      return ans ;
    }
};