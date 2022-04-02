//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/valid-palindrome-ii/
//submission link: https://leetcode.com/submissions/detail/672346452/

class Solution {
public:
    bool validPalindrome(string s) {
        return nearlyPalindrome(s, 0, s.length()-1, 0);
    }
    
    bool nearlyPalindrome(string s, int lo, int hi, int count)
    {
        if (count>1)
            return 0;
        while(lo<hi)
        {
            if (s[lo]==s[hi])
            {
                lo++;
                hi--;
            }
            else 
            {
                return (nearlyPalindrome(s, lo+1, hi, count+1) or nearlyPalindrome(s, lo, hi-1, count+1));
            }
        }
        return 1;
    }
};
