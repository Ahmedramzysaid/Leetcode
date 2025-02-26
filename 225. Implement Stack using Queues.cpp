class MyStack {
    vector<int> v ;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        v.push_back(x) ;
    }
    
    int pop() {
        if (v.size() == 0) return NULL  ;
        int a =  v.back() ;
        v.pop_back() ;
        return  a ;
    }
    
    int top() {
        if (v.size() == 0) return NULL  ;
        int a =  v.back() ;
          return  a ;
    }
    
    bool empty() {
        if (v.size() == 0) return true  ;
        return false  ;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */