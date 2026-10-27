class MinStack {
public:
  stack<int>s;
  stack<int>mn;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(mn.empty())  mn.push(value);
        else mn.push(min(mn.top(),value));
    }
    
    void pop() {
       s.pop();
       mn.pop(); 
    }
    
    int top() {
       return s.top(); 
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */