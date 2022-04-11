//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/single-number/
//submission link: https://leetcode.com/submissions/detail/678365148/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> myMap;
        for (auto i: nums)              //store elements and freq in myMap
            myMap[i]++;
        
        for (auto j: myMap)             //traverse the map and return element with freq 1
        {
            if (j.second==1)
                return (j.first);
        }
        return -1;
    }
};


/*
We can also use bit manipulation in this problem:

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int res=0;
	   for(int i=0; i<nums.size(); i++)
	   {
		   res=res^nums[i];
	   }
	   return res;
    }
};


*/
