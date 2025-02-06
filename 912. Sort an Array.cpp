class Solution {
public:
    void merge(vector<int>& nums , int l   , int mid  , int r)
    {
    int n1  =  mid- l +1  ; 
    int n2 =  r -mid ; 
    vector<int> v(n1)  , v1(n2) ;
    for (int i = 0 ;  i < n1 ; i++) v[i] = nums[i+l] ;
    for(int i =0 ;  i  < n2   ;i++) v1[i] =  nums[mid+i+1] ;
    int i =  0 ,  j = 0;  
    int k = l ; 
    while(i < n1  && j  < n2)
    {
        if (v[i] < v1[j])
        {
          nums[k] =  v[i] ;
          i++ ;
        }
        else {
             nums[k] =  v1[j] ;
          j++ ;
        }
        k++ ;
    }
    while(i  < n1)
    {
        nums[k] =  v[i] ;
        i++; 
        k++ ;
    }
    while(j  < n2)
    {
        nums[k] =  v1[j] ;
        k++; 
        j++ ;
    }

    }

   void merge_sort(vector<int>& nums , int l  ,  int r)
   {
    if (r > l )
    {
        int mid = l+(r-l)/ 2; 
        merge_sort(nums , l , mid) ;
        merge_sort(nums , mid+1 , r) ;
        merge(nums , l  , mid  , r) ;
    }
   }
     

    vector<int> sortArray(vector<int>& nums) {
         merge_sort(nums , 0,  nums.size()-1) ;   
         return nums  ;
    }
};