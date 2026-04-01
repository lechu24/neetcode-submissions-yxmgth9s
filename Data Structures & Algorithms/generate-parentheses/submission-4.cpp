class Solution {
public:
    void backtrack(int openCount, int closedCount,int n,string &stac,vector<string> &res){
        if(openCount == n && closedCount == openCount){
            res.push_back(stac);
            return;
        }

        if(openCount < n){
            stac += "(";
            backtrack(openCount+1,closedCount,n,stac,res);
            stac.pop_back();
        }
        if(closedCount < openCount){
            stac += ")";
            backtrack(openCount,closedCount+1,n,stac,res);
            stac.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string stac;
        backtrack(0,0,n,stac,res);
        return res;
    }
};
