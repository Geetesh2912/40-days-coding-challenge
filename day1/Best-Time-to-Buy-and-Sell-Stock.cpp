//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//submission link: https://leetcode.com/submissions/detail/666358807/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxDiff=0;
        for (int i=0;i<prices.size();i++)
        {
            if (prices[i]<minPrice)
                minPrice =prices[i];
            else if (prices[i]-minPrice>maxDiff)
                maxDiff=prices[i]-minPrice;
        }
        return maxDiff;
    }
};


/*Below solution works but gives TLE
https://leetcode.com/submissions/detail/666349738/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //we can treat this as a max diff problem but strating with last element of array
        int maxDiff=0;
        for (int i=prices.size()-1;i>=0;i--)
        {
           for(int j=i-1;j>=0;j--)
           {
               int diff=prices[i]-prices[j];
               if (diff>maxDiff)
               {
                   maxDiff=diff;
               }
           }
        }
        return maxDiff;
    }
};
*/
