class MinStack {
public:
     stack<int> ans;
    MinStack() {
    
    }
    
    void push(int val) {
        ans.push(val);
    }
    
    void pop() {
        ans.pop();
    }
    
    int top() {
        return ans.top();
    }
    
int getMin() {
 stack<int> dup1(ans);
  stack<int> dup2;
  int min1 = dup1.top();
while(!dup1.empty()){
   if(dup1.top() <= min1){
    dup2.push(dup1.top());
    min1 = min(min1,dup1.top());
}
dup1.pop();
}
return dup2.top();
    }

};
