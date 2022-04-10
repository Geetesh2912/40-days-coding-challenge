//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/contains-duplicate/
//submission link: https://leetcode.com/submissions/detail/676519231/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++) 
            if(nums[i]==nums[i+1])
                return true;
        return false;
    }
};
