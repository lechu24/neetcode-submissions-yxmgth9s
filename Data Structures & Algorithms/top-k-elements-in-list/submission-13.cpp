class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        vector<vector<int>> bucket(nums.size()+1);
        for(const auto& n : nums){
            freqMap[n]++;
        }
        for(const auto& t : freqMap){
            bucket[t.second].push_back(t.first);
        }
        vector<int> result;
        for(int i = nums.size(); i>=0; i--){
            for(int j=0; j < bucket[i].size();j++){
                if(result.size() < k){
                    result.push_back(bucket[i][j]);
                }
            }
        }
        return result;
    }
};
