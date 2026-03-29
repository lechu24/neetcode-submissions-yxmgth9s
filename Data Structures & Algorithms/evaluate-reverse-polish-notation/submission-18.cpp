class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int> ans;
      for(int i = 0 ; i< tokens.size() ;i++){
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
            int x = ans.top();
            ans.pop();
            int y = ans.top();
            ans.pop();
            if(tokens[i] == "+"){
                int res = y + x;
                ans.push(res);
            }
             else if(tokens[i] == "-"){
                int res = y - x;
                ans.push(res);
            }
             if(tokens[i] == "*"){
                int res = y * x;
                ans.push(res);
            }
             if(tokens[i] == "/"){
                int res = y / x;
                ans.push(res);
            }
            
        }
        else{
            ans.push(stoi(tokens[i]));
        }
      }
        return ans.top();
    }
};
