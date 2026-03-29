class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j=heights.size()-1;
        int res = 0;
        while(i<j){
           int sum = 0;
            if(heights[i] > heights[j]){
                sum = heights[j] * (j-i);
                j--;
            }
            else{
                sum = heights[i] * (j-i);
                i++;
            }
            res = max(res,sum);
        }
        return res;
    }
};
