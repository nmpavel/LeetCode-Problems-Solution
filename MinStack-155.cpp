class MinStack {
public:
    stack<int>st;
    stack<int>minSt;

    MinStack() {
        
    }
   
    void push(int val) {
     if(st.empty()){
         st.push(val);
         if(minSt.empty()){
             minSt.push(val);
         }
     }else{
         st.push(val);
         int minVal = min(val,minSt.top());
         minSt.push(minVal);
     }
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return minSt.top();
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
