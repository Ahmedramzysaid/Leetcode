class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v ;
        for(int  i = 1 ;i  <=  n ;i++)
        {
            v.push_back(i) ;
        }
        --k;
        while(next_permutation(v.begin() , v.end())&&--k) ;
        string ans ="" ;
        for(auto  it  :  v) 
        {
            ans +=('0'+it) ;
        }
        return ans ;
        

        
        
    }
};