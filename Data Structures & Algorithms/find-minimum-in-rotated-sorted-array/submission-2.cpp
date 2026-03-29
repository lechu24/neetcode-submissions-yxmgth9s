class Solution {
public:
    int findMin(vector<int> &nums) {
int l = 0, r=nums.size()-1;
while(l<r){
    int mid = ((r - l)/2) + l;
   
    if(mid > l && nums[mid] < nums[mid-1]){
        return nums[mid];
    }
    if(nums[mid]>nums[r]){
        l = mid+1;
    }
    else{
        r=mid;
    }
} 
return nums[l];
    }
};
