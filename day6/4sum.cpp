//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/4sum/
//answer link: https://leetcode.com/submissions/detail/675124496/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if (nums.size()<=3)
            return ans;
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                int sum=nums[i]+nums[j];
                int k=j+1;
                int l=nums.size()-1;
                while (k<l)
                {
                    if (nums[k]+nums[l]==(target-sum))
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k<l and nums[k]==nums[k+1])
                            k++;
                        while (k<l and nums[l]==nums[l-1])
                            l--;
                        k++;
                        l--;
                    }
                    else if (nums[k]+nums[l]<(target-sum))
                        k++;
                    else
                        l--;
                }
                while (j<nums.size()-1 and nums[j]==nums[j+1])
                    j++;
            }
            while (i<nums.size()-1 and nums[i]==nums[i+1])
                    i++;
        }
        return ans;
    }
};
