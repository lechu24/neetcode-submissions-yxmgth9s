class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        int sum =0;
        for(const auto& x : tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int x1 = res.top();
                res.pop();
                int y1 =res.top();
                res.pop();
                if(x == "+"){
                    sum = y1 + x1;
                    res.push(sum);
                }
                else if(x == "-"){
                    sum = y1 - x1;
                    res.push(sum);
                }
                else if(x == "*"){
                    sum = y1 * x1;
                    res.push(sum);
                }
                else if(x == "/"){
                    sum = y1 / x1;
                    res.push(sum);
                }
                  
            }
            else{
            res.push(stoi(x));
            }
        }
        return res.top();
        
    }
};
