 ListNode* middleNode(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }