//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/rotate-array/
//submission link: https://leetcode.com/submissions/detail/684914016/


//O(n) space solution:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //O(n) space solution
        vector<int> temp(nums.size());
        for (int i=0; i<nums.size(); i++)
        {
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
};
