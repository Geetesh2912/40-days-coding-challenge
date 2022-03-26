//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/pascals-triangle/
//submission link: https://leetcode.com/submissions/detail/667575952/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows); 
        for (int i=0;i<numRows;i++)
        {
            ans[i]=vector<int>(i+1,1);          //vector<int> (size, val) ex-> vector<int>(5,2) is basically [2,2,2,2,2] we did here because the start and end element of row is always 1, so we initialized who;e array with 1 and then did other operation on beech wale elements, we can also seperately initialize 1st and last elem instead doing this 
            for (int j=1; j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};
