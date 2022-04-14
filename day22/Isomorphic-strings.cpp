//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/isomorphic-strings/
//submission link: https://leetcode.com/submissions/detail/680134682/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> mapS;
        unordered_map<int,int> mapT;
        for (int i=0; i<s.length(); i++)
        {
            if (mapS.count(s[i]))               
            {
                if (mapS[s[i]]!=t[i])
                    return false;
            }
            else if (mapT.count(t[i]))
            {
                if(mapT[t[i]]!=s[i])
                    return false;
            }
            mapS[s[i]]=t[i];
            mapT[t[i]]=s[i];
        }
        return true;
    }
};
