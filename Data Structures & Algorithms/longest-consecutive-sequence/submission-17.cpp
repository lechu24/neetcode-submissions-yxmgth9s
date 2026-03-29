class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mapper(nums.begin(),nums.end());
        int res = 0;
        for(int n : mapper){
            if(mapper.find(n-1) == mapper.end()){
                int count = 0;
                int val = n;
                while(mapper.find(val) != mapper.end()){
                    count++;
                    val++;
                }
                res = max(res,count);
            }
        }
        return res;
    }
};
