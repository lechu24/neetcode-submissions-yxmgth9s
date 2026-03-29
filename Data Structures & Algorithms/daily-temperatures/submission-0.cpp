class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;
        bool flag = false;
        for(int i =0;i<temperatures.size();i++){
            flag = false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    res.push_back(j-i);
                    flag = true;
                    break;
                }
            }
            if(!flag){
 res.push_back(0);
            }
            
        }
        return res;
    }
};
