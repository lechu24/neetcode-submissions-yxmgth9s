class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_set<int> seen;
        for(int num : nums){
            seen.insert(num);
        }
        return nums.size() != seen.size();
    }
};
