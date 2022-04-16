//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/subarray-sum-equals-k/
//submission link: https://leetcode.com/submissions/detail/681604775/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0; 
        int count=0;
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++)
        {
            sum=sum+nums[i];
            if (sum==k)
                count++;
            if (myMap.count(sum-k))
                count=count+myMap[sum-k];
            myMap[sum]++;
        }
        return count;
    }
};
