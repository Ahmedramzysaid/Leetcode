class Solution {
public:
    bool check(int r, int l, const string& str) {  
        while(l <= r) {
            if (str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        int Len = 0;
        int start = 0;  
        
        for(int i = 0; i < s.size(); i++) {
            for(int j = s.size()-1; j >= i; j--) {
                int cur = j - i + 1;
                if (cur <= Len) continue;  
                
                if (check(j, i, s)) {
                    if (cur > Len) {
                        Len = cur;
                        start = i;
                    }
                    break;  
                }
            }
        }
        
        return s.substr(start, Len);
    }
};