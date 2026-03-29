class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 2){
            return 0;
        }
        int sum = 0;
        int size = height.size()-1;
        int maxL = height[0];
        int maxR = height[size];
        int l = 0, r= size;
        while(l<r){
            if(maxL<=maxR){
                l++;
                maxL = max(height[l],maxL);
                sum+= maxL - height[l] ;
            }
            else{
                r--;
                maxR = max(height[r],maxR);
                sum+= maxR - height[r];
            }
        }
        return sum;
    }
};
