class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> b;
    int min;
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int x) {
        if(s.empty())
            min = x;
        s.push(x);
        if(x < min)
            min = x;
    }
    
    void pop() {
        s.pop();
        min = s.top();
        while(!s.empty()){
            if(s.top() < min) 
                min = s.top();
            b.push(s.top());
            s.pop();
        }
        
        while(!b.empty()){
            s.push(b.top());
            b.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
