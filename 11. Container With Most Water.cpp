class Solution {
public:
    int maxArea(vector<int>& heights) {
        int  ans = 0 ; 
          int  l  = 0 , r =  heights.size()-1 ;
          while(l < r) 
          {
            ans =  max(ans,  (r-l) *  min(heights[l] , heights[r])) ;
            if(heights[l] >  heights[r]) r-- ;
            else l++ ;
          }
        return ans ;
    }
};
