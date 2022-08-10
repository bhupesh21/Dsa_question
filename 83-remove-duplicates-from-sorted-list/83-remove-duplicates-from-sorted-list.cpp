class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *t1=head->next;
        ListNode *t2=head;
        while(t1!=NULL)
        {
            if(t2->val==t1->val)
            {
                t2->next=t1->next;
            }
            else
            {
                t2=t1;
            }
            t1=t1->next;
        }
        return head;
        
    }
};