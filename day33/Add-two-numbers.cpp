//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/add-two-numbers/
//submission link: https://leetcode.com/submissions/detail/687376400/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansHead=NULL;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        
        int carry=0;
        while (curr1!=NULL and curr2!=NULL)
        {
            int sum=(curr1->val) + (curr2->val) + carry;
            carry=sum/10;
            
            ListNode* temp= new ListNode(sum%10);
            if (ansHead==NULL)
            {
                ansHead=temp;
            }
            else
            {
                ListNode* currAns=ansHead;
                while (currAns->next!=NULL)
                    currAns=currAns->next;
                currAns->next=temp;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        while(curr1!=NULL)
        {
            int sum= (curr1->val) + carry;
            carry=sum/10;
            
            ListNode* temp= new ListNode(sum%10);
            if (ansHead==NULL)
            {
                ansHead=temp;
            }
            else
            {
                ListNode* currAns=ansHead;
                while (currAns->next!=NULL)
                    currAns=currAns->next;
                currAns->next=temp;
            }
            curr1=curr1->next;
        }
        
        while(curr2!=NULL)
        {
            int sum= (curr2->val) + carry;
            carry=sum/10;
            
            ListNode* temp= new ListNode(sum%10);
            if (ansHead==NULL)
            {
                ansHead=temp;
            }
            else
            {
                ListNode* currAns=ansHead;
                while (currAns->next!=NULL)
                    currAns=currAns->next;
                currAns->next=temp;
            }
            curr2=curr2->next;
        }
        
        while (carry!=0)
        {
            int sum= carry;
            carry=sum/10;
            
            ListNode* temp= new ListNode(sum%10);
            if (ansHead==NULL)
            {
                ansHead=temp;
            }
            else
            {
                ListNode* currAns=ansHead;
                while (currAns->next!=NULL)
                    currAns=currAns->next;
                currAns->next=temp;
            }
        }
        return ansHead;
        
    }
};
