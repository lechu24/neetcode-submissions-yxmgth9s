class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> mapper;
       for(int i = 0; i<nums.size(); i++){
        mapper[nums[i]]++;
       }
       vector<vector<int>> bucket(nums.size()+1);
       for(const auto&t : mapper){
        bucket[t.second].push_back(t.first);
       }
       vector<int> result;
       for(int freq = nums.size(); freq >=1 ; freq--){
        for(int num: bucket[freq]){
            result.push_back(num);
            if(result.size() == k){
                return result;
            }
        }
       }
       return result;
    }
};
