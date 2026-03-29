class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        for(int i =0;i<nums.size();i++)
        {
            int max_val = -1;
            for(int j=i;j<i+k & i+k<=nums.size();j++){
                max_val = max(nums[j],max_val);
            }
            if(i+k <=nums.size()){
            res.push_back(max_val);
            }
        }
        return res;
    }
};
