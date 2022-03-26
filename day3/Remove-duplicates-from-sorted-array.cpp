//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/pascals-triangle/
//submission link: https://leetcode.com/submissions/detail/667575952/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1; 
        for (int j=1; j<nums.size();j++)
        {
            if (nums[j]!=nums[j-1])
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};
