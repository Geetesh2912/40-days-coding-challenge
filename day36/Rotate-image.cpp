//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/rotate-image/
//submission link: https://leetcode.com/submissions/detail/689219909/

/*
NOTE
* clockwise rotate
 -> first reverse up to down, then swap the symmetry

 * anticlockwise rotate
 -> first reverse left to right, then swap the symmetry
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //reverse matrix
        int lo=0;
        int hi=matrix.size()-1;
        while (lo<hi)
        {
            vector<int> temp= matrix[lo];
            matrix[lo]=matrix[hi];
            matrix[hi]=temp;
            lo++;
            hi--;
        }
        //swap the symmetry
        for (int i=0; i<matrix[0].size(); i++)
        {
            for (int j=i+1; j<matrix.size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
