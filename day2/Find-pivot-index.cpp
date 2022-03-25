//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/find-pivot-index/
//submission link: https://leetcode.com/submissions/detail/667047368/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //logic is leftsum*2 + current element == total sum then it is pivot
        int lSum=0,totalSum=0;
        for (int i=0;i<nums.size();i++)
        {
            totalSum=totalSum+nums[i];
        }
        cout<<totalSum;
        for(int j=0;j<nums.size();j++)
        {
            if ((lSum*2)+nums[j]==totalSum)
            {
                return j;
            }
            else
            {
                lSum=lSum+nums[j];
            }
        }
        return -1;
    }
};
