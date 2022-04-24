//author: Geetesh Mandaogade
//question link: https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//submission link: https://practice.geeksforgeeks.org/viewSol.php?subId=38d155080dac23e429f25081e34aa28c&pid=701299&user=geeteshmandaogade9074

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char ans;
        map<char, int> myMap;
        for (int i=0; i<str.length(); i++)
        {
            myMap[str[i]]++;
        }
        int maxFreq=0;
        for (auto x: myMap)
        {
            if (x.second>maxFreq)
            {
                ans=x.first;
                maxFreq=x.second;
            }
        }
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
