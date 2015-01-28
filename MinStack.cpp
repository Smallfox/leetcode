    class MinStack {  
    public:  
        void push(int x) {  
            data.push(x);  
            if(mindata.empty()||mindata.top()>=x)
                mindata.push(x);  
        }  
      
        void pop() {  
            if(mindata.top()==data.top())
                mindata.pop();  
            data.pop();  
        }  
      
        int top() {  
            return data.top();  
        }  
      
        int getMin() {  
            return mindata.top();  
        }  
    private:  
        stack<int> data;  
        stack<int> mindata;  
    };  
