//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/string-compression/
//submission link: https://leetcode.com/submissions/detail/685544014/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size()-1;
        int ansInd=0;
        
        while (i<=n)
        {
            int j=i+1;
            while (j<=n and chars[j]==chars[i])
            {
                j++;
            }
            chars[ansInd]=chars[i];
            ansInd++;
            
            int count=j-i;
            if (count>1)
            {
                string strCount=to_string(count);
                for (char x: strCount)
                {
                    chars[ansInd]=x;
                    ansInd++;
                }
            }
            i=j;
        }
        return ansInd;
    }
};
