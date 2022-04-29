//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/search-a-2d-matrix/
//submission link: https://leetcode.com/submissions/detail/689777719/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        
        int lo=0;
        int hi=rowSize*colSize - 1;
        
        while(lo<=hi)
        {
            int mid=lo+ (hi-lo)/2;
            int element=matrix[mid/colSize][mid%colSize];   //do dry run to get this everything else of the code is just BINARY SEARCH
            
            if (element==target)
                return true;
            else if (element<target)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return false;
    }
};
