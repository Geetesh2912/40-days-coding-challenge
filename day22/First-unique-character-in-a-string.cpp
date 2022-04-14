//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/first-unique-character-in-a-string/
//submission link: https://leetcode.com/submissions/detail/680320989/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> myMap;
        for (auto i: s)                     //put the char and no. of occurence in myMap
            myMap[i]++;
        for (int i=0; i<s.length(); i++)    //traverse original string from left
        {
            if (myMap[s[i]]==1)             //if its no. of occurence is 1
                return i;                   //return index
        }
        return -1;                          //else if every element freq>1 return -1
    }
};
