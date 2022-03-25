//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//submission link: https://leetcode.com/submissions/detail/667157072/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if (prices[i]>prices[i-1])
            {
                profit=profit+(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};

