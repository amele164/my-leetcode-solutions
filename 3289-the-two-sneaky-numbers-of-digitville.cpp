//Problem : The Two Sneaky Numbers of Digitville
//Link : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
//Method : Frequency/Counting arrray
//Time & Space complexity : O(n) O(n)


class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> frequency(nums.size(),0);
        vector<int> answer;
        for(int i = 0 ; i < nums.size() ; i++)
        {
              frequency[nums[i]]++;
              if(frequency[nums[i]]%2==0)
                answer.push_back(nums[i]);
        }
        return answer;
    }
};
