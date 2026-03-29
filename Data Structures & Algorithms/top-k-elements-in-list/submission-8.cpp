class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<vector<int>> bucket(nums.size() + 1);
        unordered_map<int,int> count;
        for(int i = 0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(const auto& x: count){
            bucket[x.second].push_back(x.first);
        }
        for(int j = bucket.size()-1;j>0;j--){
            for(const int n : bucket[j]){
            if(ans.size()<k){
                ans.push_back(n);
            }

            }
        }
        return ans;
    }
};
