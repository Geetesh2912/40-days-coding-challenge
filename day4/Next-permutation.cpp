//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/next-permutation/
//submission link: https://leetcode.com/submissions/detail/668373196/

class Solution {
public:
    vector<int> doswap(vector<int> &nums, int a, int b)
    {
        cout<<"swap krta bhai"<<endl;
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
        return nums;
    }
    
    vector<int> doreverse(vector<int> &nums, int low, int high)
    {
        cout<<"reverse krta bhai"<<endl;
        while(low<=high)
        {
            int temp=nums[high];
            nums[high]=nums[low];
            nums[low]=temp;
            low++;
            high--;
        }
        return nums;
    }
    void nextPermutation(vector<int>& nums) {
        int breakpoint=-1;
        for (int i=nums.size()-1;i>0;i--)
        {
            if (nums[i]>nums[i-1])
            {
                breakpoint=i-1;
                cout<<"breakpoint mil gaya bhai"<<endl;
                break;
            }
        }
        
        if(breakpoint<0)
        {
            cout<<"breakpoint nhi mila bhai"<<endl;
            doreverse(nums,0,nums.size()-1);
            return;
        }
        
        for(int j=nums.size()-1;j>breakpoint;j--)
        {
            if (nums[j]>nums[breakpoint])
            {
                cout<<"breakpoint mila isliye idr aaya bhai"<<endl;
                doswap(nums,j,breakpoint);
                doreverse(nums, breakpoint+1, nums.size()-1);
                break;
            }
        }
        return;
        
        
    }
};
