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

    ListNode *gi(int d,ListNode *h1,ListNode *h2)
    {
        ListNode *curr1=h1;
        ListNode *curr2=h2;
        for(int i=0;i<d;i++)
        {
            if(curr1==NULL)
            return NULL;
            curr1=curr1->next;
        }
        if(curr1==curr2)
        return curr1;
        while(curr1!=NULL && curr2!=NULL)
        {
            if(curr1==curr2)
            return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }   
    
    int get_c(ListNode *h)
    {
        int c=0;
        while(h)
        {
            c++;
            h=h->next;
        }
        return c;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=get_c(headA);
        int c2=get_c(headB);
        int d=abs(c1-c2);
        if(c1>c2)
        return gi(d,headA,headB);
        else
        return gi(d,headB,headA);
    }
};
