class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        int start;
        stack<pair<int,int>> st;
        for(int i =0;i<heights.size();i++){
            start = i;
            while(!st.empty() && st.top().second > heights[i]){
                pair<int,int> top = st.top();
                int index = top.first;
                int h = top.second;
                maxArea = max(maxArea, h * (i - index));
                 start = index;
                 st.pop();
            }
            st.push({start,heights[i]});
        }
        while(!st.empty()){
            int index = st.top().first;
            int height = st.top().second;
maxArea = max(maxArea,(height * (static_cast<int>(heights.size())-index)));
       st.pop();
        }
        return maxArea;
    }
};
