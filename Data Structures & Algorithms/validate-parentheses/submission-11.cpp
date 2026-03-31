class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(const auto& x : s){
             if(x == '{' || x == '[' || x == '('){
            res.push(x);
            }
            else{
                if(res.empty()) return false;
  if( (x =='}' || x == ')' || x == ']')){
             char t = res.top();
             cout<< t << x;
             if((x == '}' && t == '{') || (x == ']' && t == '[') || (x == ')' && t == '(')){
                res.pop();
             }
             else {
                    return false;
             }
            }
            }
        }
        return res.empty();
    }
};
