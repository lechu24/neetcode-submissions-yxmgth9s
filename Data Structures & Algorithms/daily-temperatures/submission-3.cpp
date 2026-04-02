class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> result(temperatures.size(),0);
       stack<pair<int,int>> st;
       for(int i = 0;i<temperatures.size();i++){
        if(!st.empty()){
            pair<int,int> t = st.top();
            while(!st.empty() && temperatures[i]>t.second){
                result[t.first] = i - t.first;
                st.pop();
                if(!st.empty()){
                t = st.top();
                }
                
            }
        }
        st.push({i,temperatures[i]});
       }
       return result;
    }
};
