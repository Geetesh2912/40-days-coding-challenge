//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/3sum-closest/
//submission link: https://leetcode.com/submissions/detail/671750844/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans;
        int diff=INT_MAX;
        
        for (int i=0; i<=nums.size()-3; i++)
        {
            int high=nums.size()-1;
            int low=i+1;
            while (low<high)
            {
                int sum=0;
                sum=nums[i]+nums[high]+nums[low];
                if (sum==target)
                    return target;
                else if (abs(sum-target)<diff)
                {
                    diff=abs(sum-target);
                    ans=sum;
                }
                else if (sum>target)
                    high--;
                else if (sum<target)
                    low++;
            }
        }
        return ans;
    }
};
