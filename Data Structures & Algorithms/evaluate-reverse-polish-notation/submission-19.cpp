class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for(int i = 0;i<tokens.size();i++){
            string t = tokens[i];
            if(t != "+" && t != "-" &&t != "*" &&t != "/"){
                res.push(stoi(tokens[i]));
            }
            else{
                int x = res.top();
                res.pop();
                int y = res.top();
                 res.pop();
                if(t == "+"){
                    res.push(y+x);
                }
                else if(t == "-"){
                    res.push(y-x);
                }
                else if(t == "*"){
                    res.push(y*x);
                }
                else if(t == "/"){
                    res.push(y/x);
                }
            }
        }
        return res.top();
    }
};
