class Solution {
public:
    int maximumSum(vector<int>& nums) {
      unordered_map<int , vector<int>> m ;
      for(auto  it : nums)
      {
        int a = 0 ; 
        int s  = it  ;
        while(s)
        {
            a += s%10 ; 
            s /= 10 ;
        }
        m[a].push_back(it) ;
        
      }
      int mx  = -1 ;
      for(auto  it : m)
      {
        if(it.second.size() >=  2 )
        {
          sort(it.second.begin() , it.second.end()) ;
          mx  =  max(mx ,it.second[it.second.size()-1]+it.second[it.second.size()-2]) ;
        }
      }
       
      return mx  ;
    }
};