class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       if (nums1.size() > nums2.size()) {
        return findMedianSortedArrays(nums2, nums1);
    }
    
    int n = nums1.size();
    int m = nums2.size();
    int totalLen = n + m;
    int halfLen = (totalLen + 1) / 2;

    int low = 0, high = n;

    while (low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = halfLen - mid1;

        int maxLeft1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
        int minRight1 = (mid1 == n) ? INT_MAX : nums1[mid1];

        int maxLeft2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
        int minRight2 = (mid2 == m) ? INT_MAX : nums2[mid2];

       
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
           
            if (totalLen % 2 == 1) {
                return max(maxLeft1, maxLeft2);
            }

            return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
        }
        else if (maxLeft1 > minRight2) {
            high = mid1 - 1;
        } else {
            low = mid1 + 1;
        }
    } 
    }
};
