class ProductOfNumbers {
 
    vector<int> res{1}  ;
   
public:
    ProductOfNumbers() {}
       
    
    
    void add(int num) {
        if (num == 0)
        {
          res.clear() ;
             res.push_back(1);
        }
        else res.push_back(res.back()*num) ;
    }
    
    int getProduct(int k) {
     if ( res.size() <= k) return 0 ;
       return res.back()/ res[res.size()-k-1] ;
     
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */