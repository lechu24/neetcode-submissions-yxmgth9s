class Solution {
public:
    int evalRPN(vector<string>& tokens) {
             stack<int> st;
        for(const string& x : tokens){
            
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int x1 = st.top();
                st.pop();
                int y1 = st.top();
                st.pop();
                int ans = 0;
                  if(x == "+"){
                    ans = y1 + x1;
                  }
                  else if(x == "-"){
                    ans = y1 - x1;
                  }
                  else if(x == "*"){
                    ans = y1 * x1;
                  }
                  else if(x == "/"){
            
                  ans = y1/x1;
                  }
                  st.push(ans);
                }
            else  {
                st.push(stoi(x));
            }
            
        
        }
        return st.top();
    }
};
