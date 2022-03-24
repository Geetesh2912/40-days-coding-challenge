//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/plus-one/
//submission link: https://leetcode.com/submissions/detail/666374493/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1;i>=0;i--)
        {
            if (digits[i]==9)
                digits[i]=0;
            else
            {
                digits[i]++;
                return digits;
            }
        }
        //you reach here only if all the digits are 9
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};
