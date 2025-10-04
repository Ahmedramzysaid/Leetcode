class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> pos ; 
        vector<vector<string>> ope(strs.size()) ;
        int j = 1 ;
        for(auto  it : strs)
        {
           string s =  it ; 
           sort(it.begin() , it.end()) ;
           if(pos[it])
           {
            ope[pos[it]-1].push_back(s) ;
           }
           else{
               ope[j-1].push_back(s) ;
               pos[it] =  j  ;
               j++;
           }
        }
        //return ope ;
        vector<vector<string>>ans(j-1)  ;
        for(int i = 0  ; i  < j-1  ;  i++)
        {
            for(int m =0 ;  m  < ope[i].size() ;m++)
            {
                ans[i].push_back(ope[i][m]) ;
            }
        }
        return ans ;
    }
};
