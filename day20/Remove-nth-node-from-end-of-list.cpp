//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//submission link: https://leetcode.com/submissions/detail/679069554/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* second=head;
        ListNode* first=head;
        ListNode* prev=NULL;
        while (n)
        {
            first=first->next;
            n--;
        }
        if (first==NULL)        //means only 2 elements were there
        {
            prev=first;
            head=head->next;
            delete prev;
            return head;
        }
        while (first!=NULL)
        {
            first=first->next;
            prev=second;
            second=second->next;
        }
        prev->next=second->next;
        delete second;
        return head;
    }
};
