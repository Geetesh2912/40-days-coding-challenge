//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/search-a-2d-matrix-ii/
//submission link: https://leetcode.com/submissions/detail/690369156/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //the solution is modification of bsearch as on to reduce sample space instead of following the middle element strategy
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        
        int rowIndex=0;
        int colIndex=colSize-1;
        
        while (rowIndex<rowSize and colIndex>=0)
        {
            if ( target==matrix[rowIndex][colIndex] )
                return true;
            else if (matrix[rowIndex][colIndex]<target)
                rowIndex++;
            else
                colIndex--;
        }
        return false;
    }
};
