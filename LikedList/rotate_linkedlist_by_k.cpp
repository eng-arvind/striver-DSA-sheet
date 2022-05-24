  // Time Complexity O(N)
// Space Complexity O(1)


  ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode* fast=head;
        int len=1;
        while(fast->next!=NULL)
        {
            len++;
            fast=fast->next;
        }
        fast->next=head;
        k=k%len;
        k=len-k;
       ListNode* slow=head;
       while(k-->1)
        {
             slow=slow->next;
        }
        head=slow->next;
        slow->next=NULL;
        return head;
    }