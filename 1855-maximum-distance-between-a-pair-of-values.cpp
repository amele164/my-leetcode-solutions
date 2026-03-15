//Problem : Maximum Distance Between a Pair of Values
//Link : https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/
//Method : Two Pointers
//Time & Space complexity : O(n+?m) O(1)


class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxDiff = 0 ;
        int left = 0;
        int right = 0;
        while(left < nums1.size() && right < nums2.size())
        {
            if(nums2[right]>=nums1[left]){
                maxDiff = max(maxDiff,right-left);
                right++;
            }
            else 
                left++;    
        }
        return maxDiff;
    }
};
