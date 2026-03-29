class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> p;
        for(int i=0;i<position.size();i++){
            p.push_back({position[i],speed[i]});
        }
         sort(p.rbegin(), p.rend());
        vector<double> res;
        for(auto& x:p){
            res.push_back(((double)(target-x.first)/x.second));
            if(res.size()>=2 && res.back()<= res[res.size()-2]){
                res.pop_back();
            }
        }
        return res.size();
    }
};
