class MinStack {
      int arr[300001] ;
       int mi[300001] ;
      
      int j = 0 ;

public:
    MinStack() {
        
    }
    
    void push(int val) {
         arr[j] = val ;
         if (j==0)
         {
            mi[j]=val ;

         }else{
               mi[j]= min(mi[j-1],val);
         }
         j++;
    }
    
    void pop() {
        if(j!=0)j--;   
    }
    
    int top() {
         return arr[j-1] ;
    }
    
    int getMin() {
       return mi[j-1] ;   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */