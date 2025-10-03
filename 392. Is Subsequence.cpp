class Solution {
public:
    bool isSubsequence(string s, string t) {
        int last  = 0 ;
        for(int i =  0  ; i   < s.size() ;i++)
        {
            bool flag  = false  ;
            
            for(int j = last ; j <  t.size() ;j++)
            {
                 if (s[i] ==  t[j])
                 {
                    flag = true ; 
                    last =  j+1 ;  
                    break ;
                 }
            }
            if(!flag) return false ; 
            
        }
        return true  ;

    }
};