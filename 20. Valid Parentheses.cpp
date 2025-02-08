class Solution {
public:
    bool isValid(string s) {
       stack<char>st  ;
       int cnt = 0; 
       for (auto it :s)
       {
        if (it == '(' ||  it == '{' || it == '[' ) st.push(it) ;
        else if (!st.empty() && ((it == ')' && st.top() =='(') ||(it == '}' && st.top() =='{') || (it == ']' && st.top() =='[') )) {
            st.pop() ;
            cnt++ ;
        }
       }
       if (cnt * 2 == s.size() && st.empty()) return true ;
       return false ;
    }
};