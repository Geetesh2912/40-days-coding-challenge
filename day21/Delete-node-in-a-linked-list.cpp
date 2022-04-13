//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/delete-node-in-a-linked-list/ 
//submission link: https://leetcode.com/submissions/detail/679643331/

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
    void deleteNode(ListNode* node) {
        ListNode *temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        delete(temp);
    }
};
