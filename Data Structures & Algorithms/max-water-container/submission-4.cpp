class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0, j=heights.size()-1;
        int result = 0;
        while(i<j){
            if(heights[i] <= heights[j]){
                result = max(result,heights[i]*(j-i));
                i++;
            }
            else{
                result = max(result,heights[j]*(j-i));
                j--;
            }
        }
        return result;
        
    }
};
