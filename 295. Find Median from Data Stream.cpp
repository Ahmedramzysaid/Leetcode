class MedianFinder {
    vector<int>  v ;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
         auto it = std::lower_bound(v.begin(), v.end(), num);
        v.insert(it, num);
    }
    
    double findMedian() {
        double ans = 0 ;
         if(v.size() %2  == 1)
         {
             ans =  v[v.size()/2] ;
           
         }
         else {
             ans =  (v[v.size()/2]*1.0 + v[v.size()/2-1])/2.0  ;
         
         }
         return ans  ;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */