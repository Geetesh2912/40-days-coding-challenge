//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/move-zeroes/
//submission link: https://leetcode.com/submissions/detail/666380237/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ind=0;
        for (int i=0;i<nums.size();i++) //change all zeroes to non zero elem
        {
            if (nums[i]!=0)
            {
                nums[ind]=nums[i];
                ind++;
            }
        }
        while (ind<nums.size())     //now u have count of all zeroes just add that many zeroes at end
        {
            nums[ind]=0;
            ind++;
        }
    }
};
