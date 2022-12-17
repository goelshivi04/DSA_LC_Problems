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
    ListNode* removeElements(ListNode* head, int val1) {

        if(head==NULL)
        return head;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *newh=head;
        while(curr)
        {
            if(curr->val==val1)
            {
                if(prev)
                {
                    prev->next=curr->next;
                }
                else
                {
                    newh=curr->next;
                }
                curr=curr->next;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }            
        }
        return newh;
        
    }
};
