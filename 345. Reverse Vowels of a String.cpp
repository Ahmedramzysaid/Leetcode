class Solution {
public:
    bool  valid(char  c)
    {
         c = tolower(c) ; 
         if(c == 'e' ||  c=='a' ||  c== 'o' ||  c=='i' ||  c=='u') return true ; 
         return false ; 
    }
    string reverseVowels(string s) {
    int l = 0 ,  r = s.size()-1 ; 
    while(l <=r )
    {
        if(valid(s[l]) && valid(s[r]) ) 
        {
            swap(s[l] ,s[r]) ; 
            l++; 
            r-- ;
        }
        else if (!valid(s[l]))  l++; 
        else if (!valid(s[r]) )  r-- ;
    }
        return s  ;
    }
};