class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> prefix(nums.size(),1);
      for(int i = 1; i < nums.size();i++){
         prefix[i] = nums[i-1] * prefix[i-1];
      }
      int postfix = 1;
      for(int j = nums.size()-1;j>=0;j--){
         prefix[j] *= postfix;
         postfix *= nums[j];
      }
      return prefix;

    }
};
