class Solution {
public:
     int  s  ;
     bool  arr[9][9] ;

   bool  check(int r  , int  c)
   {
    
        for (int i = r; i >= 0; i--)
            if (arr[i][c]) return false;
            
        
        for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
            if (arr[i][j]) return false;
            
       
        for (int i = r, j = c; i >= 0 && j < s; i--, j++)
            if (arr[i][j]) return false;
            
        return true;
   }

    int  call(int r)
    { 
        if (r == s) return  1 ;
        int cnt  =0 ;
        for (int i = 0 ; i  < s ;i++) 
        {
            if (check(r,i))
            {
                arr[r][i] = true  ;
                cnt+= call(r+1) ;
                arr[r][i] = false  ;
            }
        }
        return cnt ;
    }
    int totalNQueens(int n) {
         if (n == 1) return 1;
        s = n;
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = false;
            }
        }
        return call(0) ;
    }
};