class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r= nums.size()-1, middle =0;
        while(l<=r){
        int middle = l + ((r-l) / 2);
        int m = nums[middle];
        if(m == target){
            return middle;
        }
        else if(target < m){
            r = middle - 1;
        }
        else if(target > m){
            l = middle + 1;
        }
        }
        return -1;
        
       
    }
};
