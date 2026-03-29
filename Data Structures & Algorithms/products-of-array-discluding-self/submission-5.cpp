class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    vector<int>res(n,1);
    for(int i =1;i<n;i++){
        res[i] = res[i-1] * nums[i-1];
    }
    int postfix = 1;
    for(int i = n-1;i>=0;i--){ // [1,2,3,4] -> [1,1,2,6] -> [1,1,]
        res[i]*= postfix;
        postfix*= nums[i];
    }
    return res;
    }
};
