//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/intersection-of-two-linked-lists/
//submission link: https://leetcode.com/submissions/detail/679657081/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA=headA;
        ListNode* currB=headB;
        while (currA!=currB)
        {
            if (currA==NULL)
                currA=headB;
            else 
                currA=currA->next;
            
            if (currB==NULL)
                currB=headA;
            else
                currB=currB->next;
        }
        return currA;
    }
};
