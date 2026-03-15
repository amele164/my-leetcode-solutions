//Problem : Trapping Rain Water
//Link : https://leetcode.com/problems/trapping-rain-water/
//Method : Two Pointers
//Time & Space complexity : O(n) O(1)


class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int left = 0;
        int right = height.size()-1;
        int leftMax = height[left];
        int rightMax = height[right];
        while(left<right)
        {
            if(height[left]<height[right]){
                if(height[left]>=leftMax)
                    leftMax = height[left];
                else
                    water = water + leftMax-height[left];     
                left++;       
                }  
            else
            {
                if(height[right]>=rightMax)
                    rightMax = height[right];
                else
                    water+= rightMax-height[right];  
                right--;        
            }    
        }
        return water;
    }
};
