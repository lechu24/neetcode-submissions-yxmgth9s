class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<pair<int,int>> st;
        st.push({temperatures[0],0});
        for(int i =1;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>st.top().first){
                int val = st.top().second;
                res[val] = i - val;
                st.pop();
            }
           st.push({temperatures[i],i});
        }
     return res;
    }
};
