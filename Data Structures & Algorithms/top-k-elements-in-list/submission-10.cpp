class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int length = nums.size();
        vector<vector<int>> bucket(length+1);
        unordered_map<int,int> freqCounter;
        for(int i = 0; i < length; i++){
            freqCounter[nums[i]]++;
        }
        for(const auto& x : freqCounter){
            bucket[x.second].push_back(x.first);
        }
        vector<int> result;
        for(int j = length ; j >= 0 ; j--){
           for(const auto& t : bucket[j]){
            if(result.size() >= k){
               return result;
            }
            result.push_back(t);
           }
        }
        return result;

    }
};
