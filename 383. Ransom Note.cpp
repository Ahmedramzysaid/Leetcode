class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      vector<int>fre(26,0) ; 
      for(auto  it : magazine )
      {
        fre[int(it-'a')]++ ; 
      }
      for(auto it : ransomNote )
      {
        if (fre[int(it-'a')] == 0) return false  ;
        fre[int(it-'a')]-- ;
      }
      return true  ;
    }
};