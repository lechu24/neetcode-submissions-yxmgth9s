class MinStack {
public:
     stack<int> ans;
    stack<int> minStack;
    MinStack() {
    
    }
    
    void push(int val) {
        ans.push(val);
        val = min(val,minStack.empty() ? val : minStack.top());
        minStack.push(val);

    }
    
    void pop() {
        ans.pop();
        minStack.pop();
    }
    
    int top() {
        return ans.top();
    }
    
int getMin() {
return minStack.top();
    }

};
