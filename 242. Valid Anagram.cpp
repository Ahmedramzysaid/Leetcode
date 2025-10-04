class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char , int>  m ; 
    for(auto it : s)m[it]++ ;
    int cnt = s.size() ;
    for(auto  it : t)
    {
        if (m[it] == 0) return false   ; 
        m[it]-- ;
        cnt-- ;
    }
    if(cnt) return false  ;
    return true  ;
    
    }
};