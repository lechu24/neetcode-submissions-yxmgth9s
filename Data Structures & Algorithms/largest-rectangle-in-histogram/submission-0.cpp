class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = heights[0];
        int count = 0;
        for(int i =0;i<heights.size();i++){
            for(int j =0;j<heights.size();j++){
                if(heights[i] <= heights[j])
                {
                    count+=1;
                }
                else{
                res = max(count*heights[i],res);
                count =0;
                if(j>i){
                    break;
                }
                }
            }
             res = max(count*heights[i],res);
                count =0;
        }
        return res;
    }
};
