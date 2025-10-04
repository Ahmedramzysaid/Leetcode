class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0 ; 
        bool  flag =  false  ;
        for(auto  it :s  )
        {
            if (it == ' ') { flag = true  ;}
            else {
                if(flag)
                {
                    flag =  false   ;
                    cnt =0 ; 
                }
                cnt++ ; }
        }
        return cnt ;
    }
};