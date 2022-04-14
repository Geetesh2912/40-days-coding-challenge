//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/minimum-index-sum-of-two-lists/
//submission link: https://leetcode.com/submissions/detail/680169610/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        unordered_map <string,int> myMap;
        int indexSum=INT_MAX;
        
        for (int i=0; i<list1.size(); i++)          //create a map for strings in list1 and index 
            myMap[list1[i]]=i;
        
        for (int i=0; i<list2.size(); i++)          //traverse in list2
        {
            if (myMap.count(list2[i]))              //if found in map
            {
                if (i+myMap[list2[i]]<indexSum)     //check if its indexsum is less than previously found indexsum
                {
                    ans.clear();                    //if less then clear prev ans
                    ans.push_back(list2[i]);        //store new ans
                    indexSum=i+myMap[list2[i]];     //store new indexSum
                }
                else if (i+myMap[list2[i]]==indexSum)   //if there are 2 ans with same min indexsum
                {
                    ans.push_back(list2[i]);            //also add in ans
                }
            }
                
        }
        return ans;
    }
};
