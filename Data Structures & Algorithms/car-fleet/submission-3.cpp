class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> res;
        stack<double> ans;
        for(int i =0;i<position.size();i++){
            res.push_back({position[i],speed[i]});
        }
        sort(res.rbegin(),res.rend());
        for(int j = 0; j<res.size();j++){
           double val = (double)(target-res[j].first)/res[j].second;
           if(!ans.empty() && ans.top() >= val){
           continue;
           }
           ans.push(val);
        }
        return ans.size();
    }
};
