//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/merge-sorted-array/
//submission link: https://leetcode.com/submissions/detail/675863115/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1;           //points to end of nums1
        m--;                            //as m is number of elements not index
        n--;                            
        while (m>=0 and n>=0)
        {
            if (nums1[m]>nums2[n])      //if mth is gretaer it takes the last place in nums1 as m and and are already sorted
            {
                nums1[i]=nums1[m];
                i--;
                m--;
            }    
            else
            {
                nums1[i]=nums2[n];
                i--;
                n--;
            }
        }
        
         while (n>=0)                   //is n>m we may have left some elements
        {
            nums1[i]=nums2[n];
            n--;
            i--;
        }
    }
};
