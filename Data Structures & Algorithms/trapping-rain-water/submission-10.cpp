class Solution {
public:
    int trap(vector<int>& height) {
       int i =1, j = height.size()-2;
       if(height.size()<2){
        return 0;
       }
       int res = 0;
       int imax = 0 , jmax =height.size()-1;
       while(i<=j){
          if (height[imax] <= height[jmax]) {
           if(height[i]<height[imax]){
            res+=height[imax] - height[i];
           }
           else{
            imax = i;
           }
            i++;
          }
          else{
           if(height[j]<height[jmax]){
            res+=height[jmax] - height[j];
           }
           else{
                jmax = j;
           }
             j--;
          }
          
       } 
       return res;
    }
};
