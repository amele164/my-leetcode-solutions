class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        while(left<right)
        {
           if(nums[left]*-1<nums[right])
                right--;
            else if(nums[left]*-1>nums[right])
                left++;
            else
                return nums[right];    
        }
        return -1;        
    }
};
