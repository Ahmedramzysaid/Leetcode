class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long , long long> m ;
        for (int i = 0  ;i  <  nums.size(); i++)
        {
            m[i-nums[i]]++ ;
        }
        long long n =  nums.size() ;
        long long res = 0 ;
        for (auto  it :  m )
        {
             res+=  it.second*(it.second-1) /2 ;
        }
        long long total =  n*(n-1)/2 ;
        return total - res  ;
    }
};