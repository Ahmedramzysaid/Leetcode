class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char , int> hash ;
           int res  = 0;
            int cnt = 0 ;
        int l = 0 , r = 0 ;
        while(r <s.size())
        {
            if(hash[s[r]] == 0)
            {
                 cnt++ ;
                 hash[s[r]] = r+1 ;
                 r++ ;

            }else
            {
                if (l > hash[s[r]])
                {
                    cnt++ ;
                      hash[s[r]] = r+1 ;
                      r++ ;
                }
                else{
                    cnt = (r)-(hash[s[r]]-1) ;
                    if(cnt == 1)
                     l = r ;
                    else
                    l = hash[s[r]] ;
                    hash[s[r]] = r+1 ;
                    
                    r++ ;
                }

            }
            res = max(res ,cnt) ;
        }
        
        return res  ;
        
    }
};