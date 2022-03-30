//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/3sum/
//submission link: https://leetcode.com/submissions/detail/670387151/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;
        
        for (int i=0; i<nums.size(); i++)
        {
            int sum= 0-nums[i];
            int low=i+1;
            int high=nums.size()-1;
            
            while (low<high)
            {
                if (nums[low]+nums[high]==sum)
                {
                    ans.push_back( { nums[i], nums[low], nums[high] } );
                    
                    while (low<high and nums[low]==nums[low+1])     //avoid duplicate of number 2
                        low++;
                    while (low<high and nums[high]==nums[high-1])    //avoid duplicate of number 3
                        high--;
                    low++;
                    high--;
                }
                else if (nums[low]+nums[high]<sum)
                    low++;
                else
                    high--;
            }
            
            while (i<nums.size()-1 and nums[i]==nums[i+1])  //avoid duplicate of number 1
                i++;
        }
        return ans;
    }
};

