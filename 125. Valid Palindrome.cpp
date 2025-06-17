class Solution {
public:
     bool checkchar(char c )
     {
        if (c >= 'a' && c <= 'z') return false  ;
         if (c >= 'A' && c <= 'Z') return false  ;
         if(c >= '0' && c <= '9') return false  ;
         return true  ;
     }
    bool isPalindrome(string s) {
        int l = 0  , r= s.size()-1 ;
       // int cnt = 0 ; 
        while(l<r)
        {
            if (checkchar(s[r])){r-- ; continue ; }
            if (checkchar(s[l])){l++;continue ; }
            if (tolower(s[r]) != tolower(s[l]) ) return false  ;
            r-- ;
            l++ ;
          //  cnt++ ;
        }
       
        return true  ;
    }
};
