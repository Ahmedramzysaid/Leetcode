class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = ""  ;
        int  i = 0 ;  
         int n  = nums.size() ;
         unordered_map<string, int> m ;
         for(auto  it  : nums) m[it]++ ;
        while(true) 
        {
           string num = "" ;
           int x  =  n ;
           int f  = i  ; 
           while(x--) 
           {
            num+= '0'+ f%2  ;
            f/=2 ;
           }
           i++ ;
            reverse(num.begin(), num.end());
           if (m[num] == 0)
           {
            ans =  num ; 
            break ;
           }      
        }
        return ans  ;
    }
};