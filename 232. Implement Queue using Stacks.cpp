class MyQueue {
    int  i = 0 ;
    int f  = 0 ;
    int v[100] ;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        v[i++] =  x ;
    }
    
    int pop() {
        if(i== 0 ||  f == i) return NULL  ;
        int a  =  v[f++] ;
        
           return a ;

    }
    
    int peek() {
          if(i== 0 ||  i == f) return NULL  ;
        int a  =  v[f] ;
          
           return a ;
    }
    
    bool empty() {
        if(i== 0 ||  i == f) return true  ;
        return false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */