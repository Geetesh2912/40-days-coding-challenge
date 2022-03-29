//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/find-the-duplicate-number/
//submission link: https://leetcode.com/submissions/detail/669739516/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++)
        {
            int index=abs(nums[i])-1;      //consider values in array as index as array has 1 to n only so can be used as direct address table
            nums[index]=nums[index]*(-1);       
            if (nums[index]>0)              //two times multiplied with -1 will make it pos
                return abs(nums[i]);
        }
        return 0;
    }
};
