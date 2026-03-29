class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size() -1;
        int l = 0, r = n;
        int res = 0;
        int length = 0;
        while(l<r){
            if(heights[l]<=heights[r]){
                length = r - l;
                res = max(res,length*heights[l]);
                l++;
            }
            else{
                 length = r - l;
                res = max(res,length*heights[r]);
                r--;   
            }
        }
        return res;
    }
};
