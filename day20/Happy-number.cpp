//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/happy-number/
//submission link: https://leetcode.com/submissions/detail/678538565/

class Solution {
public:
    unordered_set<int> seen;
    bool isHappy(int n) {
        return (helper(n));
    }
    
    int helper(int n)
    {
        if (n==1)                       //base case 1: if it reduces to 1 it is happy
            return true;
        if (seen.find(n)!=seen.end())   //base case 2: if it is already seen before means it is going to loop endlessly in a cycle which does not include 1
            return false;
        seen.insert(n);                 //mark seen if not before
        
        int sumSqr=0;
        while (n>0)                     //calculate sum of squares of digits
        {
            int digit=n%10;
            sumSqr=sumSqr+pow(digit,2);
            n=n/10;
        }
        return (helper(sumSqr));        //check if this sum is happy or 1 or seen before
    }
};
