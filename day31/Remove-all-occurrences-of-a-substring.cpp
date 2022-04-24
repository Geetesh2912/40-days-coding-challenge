//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
//submission link: https://leetcode.com/submissions/detail/686097580/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part)<s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
