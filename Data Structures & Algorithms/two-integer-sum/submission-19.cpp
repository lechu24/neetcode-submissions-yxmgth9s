class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> resultMapper;
        for(int i = 0 ; i< nums.size(); i++){
            int diff = target - nums[i];
            if(resultMapper.find(diff) != resultMapper.end()){
                return {resultMapper[diff],i};
            }
            resultMapper.insert({nums[i],i});
        }
        return {};
    }
};
