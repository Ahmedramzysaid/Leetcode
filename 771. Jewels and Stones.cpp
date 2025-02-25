class Solution {
    unordered_map<char , int>one  ;
     unordered_map<char , int>two  ;
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0 ; 
        for(auto it  : jewels  )one[it]++ ;
        for(auto it  : stones  )two[it]++ ;
        for (auto it : one )
        {
            if (two[it.first] != 0)
             ans+= max(two[it.first], it.second) ;
        }
        return ans ;
    }
};