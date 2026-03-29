class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st1;
    stack<int> st2;
    void push(int val) {
        st1.push(val);
        int minimum = !st2.empty() ? min(val,st2.top()) : val;
        st2.push(minimum);
    }
    
    void pop() {
        st1.pop();
        st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
