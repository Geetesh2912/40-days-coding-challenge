//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
//submission link: https://leetcode.com/submissions/detail/682964886/ 

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo=0;
        int hi=arr.size()-1;
        while (lo<hi)
        {
            int mid= lo+(hi-lo)/2;
            if (arr[mid]<arr[mid+1])
                lo=mid+1;
            else 
                hi=mid;
        }
        return lo;
    }
};
