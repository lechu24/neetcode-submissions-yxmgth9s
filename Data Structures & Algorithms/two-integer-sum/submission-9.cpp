class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mapper;
     for(int i =0;i<nums.size();i++){
        int diff = target - nums[i];
        while(mapper.find(diff) != mapper.end())
        {
            return {mapper[diff],i};
        }
        mapper.insert({nums[i],i});
     }
    }

};
