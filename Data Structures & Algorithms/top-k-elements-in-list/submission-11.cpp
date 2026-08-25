class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int numsLength = nums.size() + 1;
        vector<vector<int>> ans(numsLength);
        vector<int> res;
        unordered_map<int,int> mapper;
        for(int i=0;i < nums.size();i++)
        {
            mapper[nums[i]]++;
        }
        for(const auto& t : mapper){
            ans[t.second].push_back(t.first);
        }
        for(int j=numsLength-1 ; j>=0; j--){
           
            for(int num : ans[j]){
                if(k <= res.size()){
                    return res;
                }
                res.push_back(num);
            }
        }

        return res;
    }
};
