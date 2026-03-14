//Problem : Container With Most Water
//Link : https://leetcode.com/problems/container-with-most-water/
//Method : Two Pointers
//Time & Space Complexity : O(n),O(1)


class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int n = height.size();
        int left = 0;
        int right = n-1;   
        for(; left<right;)
        {
            int area = min(height[left],height[right])*(right-left);
            if(area>max)
                max = area;
            if(height[right]>height[left])
                left++;
            else
                right--;        
        }
        return max;
    }
};
