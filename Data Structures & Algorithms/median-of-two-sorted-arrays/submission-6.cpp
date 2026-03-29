class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
           return findMedianSortedArrays(nums2,nums1);
        }
        
        int n = nums1.size();
        int m = nums2.size();
        int total = n+m;
        int half = (total+1)/2;
        
        int l = 0 , r = n;

        while(true){
                int i = (r-l)/2 + l;
                int j = half - i;

                int Aleft = i > 0 ? nums1[i-1] : INT_MIN;
                int Aright = i < n ? nums1[i] : INT_MAX;
                int Bleft = j > 0 ? nums2[j-1] : INT_MIN;
                int Bright = j < m ? nums2[j] : INT_MAX;

                if(Aleft <= Bright && Bleft <= Aright){
                    if(total % 2){
                        return max(Aleft,Bleft);
                    }
                    return (max(Aleft,Bleft) + min(Aright,Bright)) / 2.0;
                }
                else if(Aleft > Bright){
                    r = i-1;
                }
                else{
                    l = i+1;
                }
        }
        return -1;
    }
};
