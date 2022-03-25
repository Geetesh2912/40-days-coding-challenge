//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/squares-of-a-sorted-array/
//submission link: https://leetcode.com/submissions/detail/667026610/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int> ans(j+1);
        int pos=ans.size()-1;
        while (i<=j)
        {
            int square=0;
            if (abs(nums[i])>abs(nums[j]))
            {
                square=nums[i]*nums[i];
                i++;
            }
            else
            {
                square=nums[j]*nums[j];
                j--;
            }
            ans[pos]=square;
            pos--;
        }
        
        return ans;
    }
};
