class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
          if (s1.size() != s2.size()) return false  ;
          
          map<char ,int>m1 ;
          for(auto  &it : s1)m1[it]++ ;
          
          map<char ,int>m2 ;
          for(auto  &it : s2)m2[it]++ ;
          bool  flag = true  ;
          for(auto  it :  m1)
          {
               if(it.second !=  m2[it.first])
               {
                flag  = false  ;
                break; 
               }
          }
          if(!flag) return false  ; 
          else {
            int cnt = 0 ;
            for (int i =  0 ;  i  < s1.size() ;i++)
            {
                if (s1[i] !=  s2[i])  cnt++ ;
            }
            if(cnt == 2 || cnt ==0) return true ; 
            return false ; 
          }
     

    }
};