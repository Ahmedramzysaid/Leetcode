class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int  , int> um ; 
        for(auto it : nums)
         um[it]++;
        set<int>v ;
        for(auto  it :  um) v.insert(it.second) ;
      vector<int>ans ;
       for (auto it = v.rbegin(); it != v.rend(); it++)
       {
        if (k == 0) break ;
        for(auto it1 :  um )
        {
            if(k != 0)
            {
            if(*it ==  it1.second)
            {
                ans.push_back(it1.first) ;
                k-- ;
            }
            }
            else break ;
            
        }
       }
        return ans ;
    }
};
