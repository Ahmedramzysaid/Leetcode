class Solution {
public:
     
     
    int mySqrt(int x) {
        if (x == 0) return 0;
         int l = 0 ,  r  = 46340 ;
         int ans  = 0 ;
         while(l<=r)
         {
            int mid = (l+r)/2  ;
            if(mid*mid  ==  x) return mid ; 
            else if (mid*mid >  x) r = mid-1  ;
            else {
                ans = mid  ; 
                l  = mid+1 ;
            }            
         }
         return ans  ;
    }
};