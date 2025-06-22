class Solution {
    public:
        vector<string> divideString(string s, int k, char fill) {
            string a = "" ; 
            vector <string> ans ;
            for(int i = 0 ; i < s.size() ;i++) 
            {
                if (i % k ==0 &&  i != 0)
                {
                   ans.push_back(a) ;
                   a = "" ;
                }
                a+= s[i] ;
            }
          if (a.size()==  k ) ans.push_back(a) ; 
          else if (a.size()!=0 ) 
          {
            while(true)
            {
                if(a.size() ==  k)
                {
                    ans.push_back(a) ;
                    return ans  ;
                }
                else a+=fill ;
            }
          }
          return ans ;
        }
    };