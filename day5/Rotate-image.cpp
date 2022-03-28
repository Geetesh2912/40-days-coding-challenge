//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/rotate-image/
//submission link: https://leetcode.com/submissions/detail/669047569/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //clockwise: reverse up<->down and swap symmetry
        //anticlockwise: swap symmetry and do reverse up<->down
        
        doreverse(matrix);
        swapSymmetric(matrix);
        return;
    }
    
    void doreverse(vector<vector<int>>& matrix)
    {
        int low=0;
        int high=matrix.size()-1;
        while (low<high)
        {
            vector<int> temp;
            temp=matrix[low];
            matrix[low]=matrix[high];
            matrix[high]=temp;
            low++;
            high--;
        }
        return;
    }
    
    void swapSymmetric(vector<vector<int>>& matrix)
    {
        for (int i=0; i<matrix.size(); i++)
        {
            for (int j=i+1; j<matrix[0].size();j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        return;
    }
};
