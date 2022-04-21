//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//submission link: https://leetcode.com/submissions/detail/684931898/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;                        //only count no. of times nums[i+1]<nums[i]
        
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i-1]>nums[i])
                count++;
        }
        
        if (nums[nums.size()-1]>nums[0])
            count++;
        return (count<=1);                //should be less than 1 count=0 when all elements are equal and count=1 when sorted array
    }
};
