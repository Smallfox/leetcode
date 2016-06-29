class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        fst.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(fst.size() == 1)
            fst.pop();
        else{
            while(fst.size() > 1 ){
                bst.push(fst.top());
                fst.pop();
            }
            fst.pop();
            while(bst.size() > 0){
                fst.push(bst.top());
                bst.pop();
            }
        }
    }

    // Get the front element.
    int peek(void) {
        if(fst.size() == 1)
            return fst.top();
        while(fst.size() > 1){
            bst.push(fst.top());
            fst.pop();
        }
        int firstElement = fst.top();
        bst.push(firstElement);
        fst.pop();
        while(bst.size() > 0){
            fst.push(bst.top());
            bst.pop();
        }
        return firstElement;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return fst.empty();
    }
private:
    stack<int> fst;
    stack<int> bst;
};
