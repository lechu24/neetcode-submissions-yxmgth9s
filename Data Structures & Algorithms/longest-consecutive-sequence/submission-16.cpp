class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> ans(nums.begin(),nums.end());
        for(int n : ans){
            if(ans.find(n-1) == ans.end()){
            int count = 0;
            int val = n;
            while(ans.find(val) != ans.end()){
                count++;
                val++;
            }
            res = max(res,count);
            }
        }
        return res;
    }
};
