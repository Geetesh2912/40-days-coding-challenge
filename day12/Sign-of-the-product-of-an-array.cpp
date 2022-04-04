//author: Geetesh Vilas Mandaogade
//question link: https://leetcode.com/problems/sign-of-the-product-of-an-array/
//submission link: https://leetcode.com/submissions/detail/673815703/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount=0;                //keep a count for neg elements
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i]==0)                     //found 0 -> return 0 as multiplication with 0 will give 0
                return 0;
            else if (nums[i]<0)                  //found negative -> increase count
                negativeCount++;
        }
        
        if (negativeCount%2==0)             //if count of negative elements is even the multiplication will give positive answer always
            return 1;
        else                                //else the count is odd -> negative result
            return -1;
    }
};
