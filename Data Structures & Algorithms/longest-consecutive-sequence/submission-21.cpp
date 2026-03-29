class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique(nums.begin(),nums.end());
        int res = 0;
        for(int num : unique){
         if(unique.find(num-1) != unique.end()){
            continue;
         }
         int count = 0;
         int start = num;
         while(unique.find(start) != unique.end()){
            count++;
            start++;
         }
         res = max(res,count);
        }
        return res;
    }
};
