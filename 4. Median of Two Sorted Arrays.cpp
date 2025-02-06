class Solution {
public:
    vector <int>solve(vector<int> nums1 ,vector<int>& nums2)
    {
        int i = 0  ,  j  = 0  , k =0; 
        vector<int>v(nums1.size()+nums2.size()) ;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] <=  nums2[j]  )
            {
                v[k] =  nums1[i] ;
                i++ ;
            }
            else {
                v[k] =  nums2[j] ;
                j++ ;
            }
            k++ ;
        }
        while(i < nums1.size())
        {
            v[k] =  nums1[i] ;
            i++ ;
            k++ ;
        }
        while(j < nums2.size())
        {
            v[k] =  nums2[j] ;
            j++ ;
            k++ ;
        }
        return v ; 
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v=  solve(nums1 ,nums2 ) ;
        if (v.size() %2 == 0) 
        {
            return (v[v.size()/2]+v[v.size()/2-1])/2.0 ;
        }
         return v[v.size()/2] ;
    }
};