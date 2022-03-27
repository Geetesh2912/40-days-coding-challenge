//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/container-with-most-water/
//submission link: https://leetcode.com/submissions/detail/668420876/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int waterArea=0;
        int i=0;
        int j=height.size()-1;
        while (i<j)
        {
            int h=min(height[i],height[j]);
            waterArea=max(waterArea, (j-i)*h);
            if (height[i]<height[j])
                i++;
            else
                j--;
        }
        return waterArea;
    }
};
