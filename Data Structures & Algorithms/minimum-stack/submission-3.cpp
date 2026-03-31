class MinStack {
public:
    MinStack() {
        
    }
    stack<int> s;
    stack<int> minStack;
    void push(int val) {
        s.push(val);
        int v = !minStack.empty() ? min(val,minStack.top()) : val;
        minStack.push(v);
    }
    
    void pop() {
        s.pop();
        minStack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
       return minStack.top();
    }
};
