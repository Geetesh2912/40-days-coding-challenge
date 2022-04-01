// author: Geetesh Mandaogade
// question link: https://leetcode.com/problems/reverse-string/
// submission link: https://leetcode.com/submissions/detail/671762398/

class Solution {
public:
    void reverseString(vector<char>& s) {
        recursiveRev(s, 0, s.size()-1);
        return;
    }
    
    void recursiveRev (vector<char>& s, int lo, int hi)
    {
        if (lo>hi)
            return;
        char temp=s[lo];
        s[lo]=s[hi];
        s[hi]=temp;
        recursiveRev(s, ++lo, --hi);
    }
};
