class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> ans;
     for(int i =0 ;i<nums.size();i++){
        int value = 1;
        for(int j=0;j<nums.size();j++){
            if(j!=i){
                value*=nums[j];
            }
        }
        ans.push_back(value);
     }
     return ans;
    }
};
