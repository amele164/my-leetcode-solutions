//Problem : Length of Last Word
//Link : https://leetcode.com/problems/length-of-last-word/
//Method : Two Pointers
//Time & Space complexity : O(n) O(1)


class Solution {
public:
    int lengthOfLastWord(string s) {
        int right = s.size()-1;
        int length = 0;
        while(s[right]==' ')
            right--;
        while(right>=0 && s[right]!=' '){
            right--;
            length++;
        }
        return length;
    }
};
