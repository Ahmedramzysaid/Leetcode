class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n  = grid.size() ;
         n*= n ;
         int miss = ((n+1)*n) / 2 , ans  =0  ;
          vector<int>m(n+1 , 0) ;
        for(int i = 0 ;i  < grid.size() ;i++)
        {
             for(int j = 0 ;  j < grid[i].size() ;j++)
           {
            if( m[grid[i][j]] !=1 )
            {
                miss -= grid[i][j] ;
            }
            else {
                ans = grid[i][j] ;
            }
               m[grid[i][j]]++ ;
           }
        }
        return {ans , miss} ;
    }
};