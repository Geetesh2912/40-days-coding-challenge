//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/middle-of-the-linked-list/
//submission link: https://leetcode.com/submissions/detail/679050053/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL)      //covers both even number of nodes and odd number of nodes
        {
            fast=fast->next->next;                  //tortoise moves 2 steps
            slow=slow->next;                        //hare moves 1 step
        }
        return slow;                                //when tortoise reaches end hare is exactly in middle of LL as speed of tortoise was 2 times that of hare
    }
};
