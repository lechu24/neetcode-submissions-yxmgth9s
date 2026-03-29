class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        for(int num : nums){
            ans[num]++;
        }
        vector<pair<int,int>>sorted_ans(ans.begin(),ans.end());
        vector<int> final;
        sort(sorted_ans.begin(),sorted_ans.end(),[](const pair<int,int>&a,const pair<int,int>&b){return a.second > b.second;});
     int i =0;
      while(k--){
                final.push_back(sorted_ans[i++].first);
      }
        return final;
    }
};
