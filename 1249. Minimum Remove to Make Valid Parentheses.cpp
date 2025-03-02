class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st ; 
        for(int  i = 0  ; i < s.size() ;i++)
         {
            if(s[i]  == '(') st.push(s[i]) ;
            else {
                if ( !st.empty()&&s[i] == ')' && st.top() == '(')
                {
                    st.pop() ;
                }
                else if(st.empty() && s[i] == ')' )
                {
                    
                    s.erase(i,1) ;
                    i-- ;
                }
            }

         }
         if(st.empty()) return s ;
         else {
            for (int i = s.size()   ; i >=0 ;i--  )
            {
                if (st.empty())
                {
                    break ; 
                }
                else {
                    if (s[i] == '(')
                    {
                        s.erase(i,1) ;
                        st.pop() ;
                    }
                }
            }
         }
         return s ;
    }
};