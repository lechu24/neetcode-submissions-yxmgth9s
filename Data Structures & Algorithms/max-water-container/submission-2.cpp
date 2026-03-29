class Solution {
public:
    int maxArea(vector<int>& heights) {
       int res = 0;
       int i =0, j = heights.size()-1;
       while(i<j){
        if(heights[i] <= heights[j]){
            res = max(res,heights[i]*(j-i));
            i++;
        }
        else if(heights[i] > heights[j]){
            res = max(res,heights[j]*(j-i));
            j--;
        }
       }
       return res;
    }
};
