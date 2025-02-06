class Solution {
public:
    int countPrimes(int n) {
        vector <bool> v(n+1 , true) ;
        v[0] = false ;
        v[1] = false  ;
      if (n == 1 || n == 2  ||  n == 0) return 0 ; 
        int len = n ; 
        len-=2 ;
        for (int i = 2 ; i *i <=  n ; i++  )
        {
            for (int j = i * i ;  j< n ; j+=i  )
            if (v[j]) {v[j] = false  ; len-- ; } 
        }
        
        return len ;
    }
};