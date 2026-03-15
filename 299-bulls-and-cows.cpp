//Problem : Bulls and Cows
//Link : https://leetcode.com/problems/bulls-and-cows/
//Method : Frequency counting
//Time & Space complexity = O(n) O(1)


class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> frequency(10,0); 
        int bulls = 0;
        for(int i = 0 ; i < secret.size();i++)
        {
            if(secret[i]==guess[i])
                bulls++;
            else
                frequency[secret[i]-'0']++;    
        }
        int cows = 0; 
        for(int i = 0 ; i < secret.size();i++)
        {
            if(secret[i]!=guess[i] && frequency[guess[i]-'0']>0)
            {
                cows++;
                frequency[guess[i]-'0']--;
            }     
        }
        return (to_string(bulls)+"A"+to_string(cows)+"B"); 
    }
};
