class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> result;
        for(int i =0 ;i<nums.size();i++){
            int diff = target - nums[i];
            if(result.find(diff) != result.end()){
                return {result[diff],i};
            }
            result.insert({nums[i], i});
        }
        return {};
    }

};
