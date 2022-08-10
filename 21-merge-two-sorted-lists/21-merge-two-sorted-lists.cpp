class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1, *ptr2;
        ptr1 = list1;
        ptr2 = list2;
        
        ListNode* head;
        if(ptr1 && ptr2)
        {
            if(ptr1->val <= ptr2->val)
            {head = ptr1;
            ptr1 = ptr1->next;}
            else{
                head = ptr2;
                ptr2 = ptr2->next;
            }
        }
        else if(ptr1)
        {
            head = ptr1;
            ptr1 = ptr1->next;
        }
        else if(ptr2)
        {
            head = ptr2;
            ptr2 = ptr2->next;
        }
        else return NULL;
        
        ListNode* ptr = head;
        while(ptr1 && ptr2)
        {
            if(ptr1->val <= ptr2->val)
            {
                ptr->next = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr->next = ptr2;
                ptr2 = ptr2->next;
            }  
            ptr = ptr->next;
        }
        
        while(ptr1)
        {
            ptr->next = ptr1;
            ptr1 = ptr1->next;
            ptr = ptr->next;
        }
        
        while(ptr2)
        {
            ptr->next = ptr2;
            ptr2 = ptr2->next;
            ptr = ptr->next;
        }
        
        return head;
    }
};