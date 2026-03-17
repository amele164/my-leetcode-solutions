//Problem : Two Sum II - Input Array Is Sorted
//Link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//Method : Two Pointers
//Time & Space complexity : O(n) O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        for(;left<right;)
        {
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                return {left+1,right+1};
                }
            else if(sum>target)
                right--;
            else
                left++;    
        }
        return {};
    }
};
