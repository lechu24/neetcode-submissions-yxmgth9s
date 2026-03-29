class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size() + 1);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(const auto& s : count){
            freq[s.second].push_back(s.first);
        }
        vector<int> res;
        for(int j = freq.size()-1; j>0;j--){
            for(const auto& t : freq[j]){
                res.push_back(t);
                if(res.size()>=k){
                    return res;
                }
            }
        }
        return res;
    }
};
