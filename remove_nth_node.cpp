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

    int get(ListNode *head)
    {
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int n1=get(head);
        n1=n1-n;
        if(!n1)
        {
            head=head->next;
            return head;
        }
        ListNode *temp=head;
        for(int i=1;i<n1;i++)
        {
            if(!temp->next)
            break;
            temp=temp->next;
        }
        if(temp->next !=NULL)
        temp->next=temp->next->next;
        return head;
    }
};
