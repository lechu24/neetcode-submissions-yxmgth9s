class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(int n : store){
            if(store.find(n-1) == store.end()){
            int streak = 1;
            int curr = n;
            while(store.find(curr + 1) != store.end()){
                curr++;
                streak ++;
            }
            res = max(res, streak);
        }
        }
        return res;
    }
};
