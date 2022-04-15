//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
//submission link: https://leetcode.com/submissions/detail/680975238/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> myMap;
        for (auto i: nums1)
            myMap[i]++;
        for (int i=0; i<nums2.size(); i++)
        {
            if (myMap[nums2[i]]>0)
            {
                ans.push_back(nums2[i]);
                myMap[nums2[i]]--;
            }
        }
        return ans;
    }
};
