class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> ans;
       vector<vector<int>> arr(nums.size() + 1);
       for(int i =0;i<nums.size();i++){
            ans[nums[i]]++;
       }
       for(const auto& p: ans){
        arr[p.second].push_back(p.first);
       }
       vector<int> res;
       for(int t = arr.size()-1 ; t>=0;t--){
        for(int n: arr[t]){
                res.push_back(n);  
             if(res.size()>=k){
                    return res;
                }
        }
       }
       return res;
    }
};
