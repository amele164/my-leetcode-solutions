//Problem : Reverse String Prefix
//Link : https://leetcode.com/problems/reverse-string-prefix/
//Method : Two Pointers
//Time & Space complexity : O(n) O(1)


class Solution {
public:
    string reversePrefix(string s, int k) {
        int left = 0 ;
        int right = k - 1;
        while(left<right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
