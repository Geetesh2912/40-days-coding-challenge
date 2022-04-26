//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//submission link: https://leetcode.com/submissions/detail/688019743/ 

class Solution {
public:
    string removeDuplicates(string s) {
        string myStack="";                  //we'll use string as a stack
        for (int i=0; i<s.length(); i++)
        {
            if (myStack.empty())            //if empty put in string
            {
                myStack.push_back(s[i]);    //push in stack=push_back in string
            }
            else 
            {
                if (s[i]==myStack.back())   //top in stack=back in string
                    myStack.pop_back();     //pop in stack=pop_back in string
                else
                    myStack.push_back(s[i]);
            }
        }
        return myStack;                     //we didnt use stack to reduce one step of reversing at last, that is if stack is used while returning string we'll have to reverse the stack
    }
};
