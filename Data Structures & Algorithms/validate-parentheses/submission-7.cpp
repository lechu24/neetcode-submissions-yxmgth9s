class Solution {
public:
    bool isValid(string s) {
        stack<char> result;
         if(s.size() == 1){
                return false;
            }
        for(auto& st: s){
           if(st == '[' || st == '{' || st == '('){
            result.push(st);
           }
           else if(st == ']' || st == '}' || st == ')'){
            if(result.empty()){
                return false;
            }
            char top = result.top();
            if((st == ']' && top == '[') || (st == '}' && top == '{')
             || (st == ')' && top == '(')){
                result.pop();
            }
            else{
                return false;
            }
           }
        }
        return result.empty();
    }
};
