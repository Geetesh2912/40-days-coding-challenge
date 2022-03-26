//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/pascals-triangle/
//submission link: https://leetcode.com/submissions/detail/667575952/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows); 
        for (int i=0;i<numRows;i++)
        {
            ans[i]=vector<int>(i+1,1);
            for (int j=1; j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};
