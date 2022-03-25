//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/majority-element/
//submission link: https://leetcode.com/submissions/detail/667055924/

//https://www.cs.utexas.edu/~moore/best-ideas/mjrty/example.html    --moores voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //best explain of mooore https://www.cs.utexas.edu/~moore/best-ideas/mjrty/example.html
        int majIndex=0;
        int count=1;
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]==nums[majIndex])
                count++;
            else if (count==0)
            {
                majIndex=i;
                count=1;
            }
            else
                count--;
        }
        return nums[majIndex];
    }
};
