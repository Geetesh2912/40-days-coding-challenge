//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/move-zeroes/
//submission link: https://leetcode.com/submissions/detail/684246142/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for (int j=0; j<nums.size(); j++)
        {
            if (nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};
