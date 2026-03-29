class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<2){
            return 0;
        }
        int l =0, r = height.size()-1, lmax = height[0], rmax = height[height.size()-1];
        int result = 0;
        while(l<r){
            if(lmax<=rmax){
                l++;
                lmax = max(height[l],lmax);
                result += lmax - height[l];
            }
            else{
                r--;
                rmax= max(height[r],rmax);
                result += rmax - height[r];
            }
        }
        return result;
    }
};
