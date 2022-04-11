//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/intersection-of-two-arrays/
//submission link: https://leetcode.com/submissions/detail/678513183/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> mySet;
        for (auto x: nums1)         //as set stores only uniques, duplicates are eliminated
            mySet.insert(x);
        
        for (auto x: nums2)
        {
            if (mySet.find(x)!=mySet.end())     //element x of nums1 also present in set i.e nums1
            {
                ans.push_back(x);               //add to intersection
                mySet.erase(x);                 //erase particular element as we dont want to repeat 
            }
        }
        return ans;
    }
};
