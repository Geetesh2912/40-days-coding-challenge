//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/merge-intervals/
//submission link: https://leetcode.com/submissions/detail/667768955/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
            vector<vector<int>> ans;
        
            if(interval.size()==0)                  //no intervals
                return ans;
        
            sort(interval.begin(),interval.end());
            ans.push_back(interval[0]);          //1st interval in ans for comparison to begin
            int j=0;
            for(int i=1; i<interval.size(); i++)
            {
                if(ans[j][1] >= interval[i][0])    //overlap
                {
                    ans[j][1] = max (ans[j][1],interval[i][1]);
                }
                else
                {
                    j++;
                    ans.push_back(interval[i]);
                }
            }
            return ans;
        }
};
