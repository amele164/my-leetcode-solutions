//Problem : Count Pairs Whose Sum is Less than Target
//Link : https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
//Method : Two Pointers
//Time & Space complexity : O(nlogn) O(1)


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(;left<right;)
        {
            int sum = nums[left] + nums[right];
            if(sum<target)
            {
                ans += (right-left);
                left++;
            }
            else if(sum>=target)
                right--;
        }
        return ans; 
    }
};
