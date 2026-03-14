//Problem : Two Sum
//Link : https://leetcode.com/problems/two-sum/
//Method : Two Pointers
//Time & Space Complexity = O(nlogn) O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        vector<pair<int,int>> arr;
        for(int i = 0 ; i < nums.size();i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(nums.begin(),nums.end());
        while(left<right)
        {
            int sum = nums[left]+nums[right];
            if(sum>target)
                right--;
            else if(sum<target)
                left++;
            else
                return {arr[left].second,arr[right].second};        
        }
        return {};
    }
};
