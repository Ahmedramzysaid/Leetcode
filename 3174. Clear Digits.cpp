class Solution {
public:
    string clearDigits(string s) {
       stack<char> st; 
       for (auto it  :  s) 
       {
        if (it <= '9' && it >= '0' )
        {
             if (!st.empty())
             {
                st.pop() ;
             }
             else continue  ;
        }
        else {
            st.push(it) ;
        }

       }
    
    if(st.empty()) return "" ;
    string ans ="" ;
    while(!st.empty())
    { 
        ans += st.top() ;
        st.pop() ;
    }
    reverse(ans.begin() , ans.end()) ;
    return ans ;
    }
};