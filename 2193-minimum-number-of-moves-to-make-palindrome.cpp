//Problem : Minimum Number of Moves to Make Palindrome
//Link : https://leetcode.com/problems/minimum-number-of-moves-to-make-palindrome/
//Method : Two Pointers
//Time & Space complexity : O(n^2) O(1)


class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int count = 0;
        int right = s.size()-1;
        int left = 0;
        while(left<right)
        {
            int r = right;
            while(s[left]!=s[r])
                r--;
            if(r==left)
            {
                swap(s[left],s[left+1]);
                count++;
            }
            else
            {
                while(r<right)
                {
                    swap(s[r],s[r+1]);
                    count++;
                    r++;
                }
                left++;
                right--;
            }
        }
        return count;
    }
};
