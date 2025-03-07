class Solution {
public:

    vector<int> closestPrimes(int left, int right) {
    vector<bool> prime(right + 1, true);

      for (int p = 2; p * p <= right; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= right; i += p)
                prime[i] = false;
        }
      }
        vector<int>ans ;
        for(int i =  2;  i <=  right ;i++)
        {
            if(prime[i] && i >= left )
               ans.push_back(i);
        }
        if (ans.size() <= 1) return {-1 ,-1} ;
        int low  = 0 , high = 0 , mi = 1e9  ;
        for(int i = 0 ;  i < ans.size()-1 ;i++)
        {
            if (ans[i+1]-ans[i] < mi)
            {
                mi = ans[i+1]-ans[i] ;
                low =  ans[i] ;
                high =  ans[i+1] ; 
            }
        }
        return {low , high} ;
    }
};